/*
Pontifícia Universidade Católica de Goiás
João Vítor Rodrigues Silva
26/02/2026
21:05
*/
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
int main(){
    TConjunto teste;
    teste.tamanho = 0;
    teste.array = 0;

    TConjunto copia;
    copia.tamanho = 0;
    copia.array = 0;

    printf("\nDigite o tamanho do Conjunto: ");
    scanf("%d",&teste.tamanho);

    gerarConjunto(&teste, &copia);
    

    int opcao=0;
   while(opcao != 9)
   {
     int elemento;
     printf("========================\n");
     printf("1 - Mostrar Conjunto Original\n");
     printf("2 - Busca Sequencial\n");
     printf("3 - Mostrar Array Original e Ordenado\n");
     printf("4 - Busca Binaria\n");
     printf("9 - Sair\n");
     printf("========================\n");
     printf("Digite a opcao desejada: ");
     scanf("%d", &opcao);
     switch (opcao)
     {
       case 1:
        mostrarOriginal(&copia);
        break;

       case 2:
        printf("Digite o elemento a ser buscado ou digite 0 para sair: ");
        scanf("%d", &elemento);
        while(elemento != 0){

          int posicao = buscaSequencial(&copia, elemento);
          printf("Digite o elemento a ser buscado ou digite 0 para sair: ");
          scanf("%d", &elemento);

        }
        break;

       case 3:
        mostrarOriginal(&copia);
        selectionSort(&teste);
        mostrarConjunto(&teste);
        break;

       case 4:
        
        printf("Digite o elemento a ser buscado ou digite 0 para sair: ");
        scanf("%d", &elemento);
        selectionSort(&teste);
        while(elemento != 0){
          int posicao = buscaBinaria(&teste, elemento);
          printf("Digite o elemento a ser buscado ou digite 0 para sair: ");
          scanf("%d", &elemento);
        }
        break;

       case 9:
        free(teste.array);
        free(copia.array);
        system("pause");
        return 0;
     }

   }
}