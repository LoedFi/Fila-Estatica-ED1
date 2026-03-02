#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcoes.h"


void gerarConjunto(TConjunto *const conjA, TConjunto *const conjB){
    /*
     *  objetiva inicializar o gerador de números aleatórios
        com o valor da função time(NULL), definindo uma semente
        inicial para o gerador. Este por sua vez, é calculado como
        sendo o total de segundos passados desde 1 de janeiro de 1970
        até a data atual. Desta forma, a cada execução o valor da
        "semente" será diferente.
    */
    srand(time(NULL));

    conjA->array = malloc (conjA->tamanho * sizeof(int));
    conjB->array = malloc (conjA->tamanho * sizeof(int));
    conjB->tamanho = conjA->tamanho;
    
    for(int pos = 0; pos < conjA->tamanho; pos++){
        conjA->array[pos] = (rand() % 1001);
        conjB->array[pos] = conjA->array[pos];
    }
}

//Case 1
void mostrarOriginal(TConjunto const * const conjA){
    printf("Conjunto original: {");
    for(int pos = 0; pos < conjA->tamanho; pos++){
        printf(" %d ",conjA->array[pos]);
        if(pos < conjA->tamanho-1) printf("|");
    }
    printf("}\n\n ");
}

//Case 2
int buscaSequencial(TConjunto const * const conjA, int elemento){
    int *pos=conjA->array; //Declara um Vetor de Inteiros para percorrer o Array do Conjunto

    while(pos < conjA->array + conjA->tamanho){ //Enquanto o ponteiro pos for menor que o elemento do ultimo endereço do Array
        if(*pos == elemento) { //Se o valor apontado corresponder com o numero digitado pelo usuario, busca encerrada
			printf("Elemento %d encontrado na posicao: %ld\n", elemento, pos - conjA->array); //
            return pos - conjA->array;
		}
        pos++;
    }

	/*Se a busca nao for encerrada, ou seja, o numero digitado pelo usuario nao for 
	encontrado no Array, a função retorna -1 e exibe uma mensagem informando que o 
	elemento nao foi encontrado no conjunto*/

	printf("Elemento %d nao encontrado no conjunto.\n", elemento);
    return -1;
}

//Case 3 /1
void selectionSort(TConjunto *const conjB){ 
   for (int step = 0; step < conjB->tamanho - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < conjB->tamanho; i++) {
           if (conjB->array[i] < conjB->array[min_idx]) {
                min_idx = i;
            }
        }
         int temp = conjB->array[step];
         conjB->array[step] = conjB->array[min_idx];
         conjB->array[min_idx] = temp;
    }
}

//Case 3 /2
void mostrarConjunto(TConjunto const * const conjB){
    printf("Conjunto ordenado: {");
    for(int pos = 0; pos < conjB->tamanho; pos++){
        printf(" %d ",conjB->array[pos]);
        if(pos < conjB->tamanho-1) printf("|");
    }
    printf("}\n\n ");
}

//Case 4
int buscaBinaria(TConjunto const * const conjB, int elemento){
    int low=0;
    int high= conjB->tamanho-1;
    int mid;
    while(low<=high){
        mid= ((low+high)/2);
        if(conjB->array[mid] == elemento){
            printf("Elemento %d encontrado na posicao: %d\n", elemento, mid);
            return mid;
       }
        else if(elemento < conjB->array[mid]){
           high=mid-1;
       }
       else{
        low=mid+1;
       }
    }
    printf("Elemento %d nao existe no conjunto.\n", elemento);
    return -1;
}
