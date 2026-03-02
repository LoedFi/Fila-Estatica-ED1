typedef struct
{
    int tamanho;
    int *array;
}TConjunto;

/*=========================================================
    funcão geradora de um conjunto de elementos aleatórios
    Parametros: conjA - ponteiro para a struct com os dados
                        do conjunto a ser gerado
  =========================================================*/
void gerarConjunto(TConjunto *const conjA, TConjunto *const conjB);

/*=========================================================
    funcão para mostrar o dados de um conjunto
    Parametros: conjA - ponteiro para a struct com os dados
                        do conjunto a ser mostrado
  =========================================================*/
void mostrarOriginal(TConjunto const * const conjB);
/*=========================================================
    funcão para mostrar o dados de um conjunto
    Parametros: conjA - ponteiro para a struct com os dados
                        do conjunto a ser mostrado
  =========================================================*/
void mostrarConjunto(TConjunto const * const conjA);

/*=========================================================
    funcão para buscar um elemento no conjunto
    Parametros: conjA - ponteiro para a struct com os dados
                        do conjunto a ser mostrado
    retorno: inteiro onde:
             -1 - Elemento não existe no conjunto
             >=0 - posição do elemento no conjunto
  =========================================================*/
int buscaSequencial(TConjunto const * const conjA, int elemento);

/*=========================================================
    funcão para ordenar o conjunto
    Parametros: conjA - ponteiro para a struct com os dados
                        do conjunto a ser ordenado e mostrado
  =========================================================*/
void selectionSort(TConjunto *const conjA);

/*=========================================================
    funcão para ordenar o conjunto
    Parametros: conjA - ponteiro para a struct com os dados
                        do conjunto a ser buscado e mostrado
    retorno: inteiro onde:
             -1 - Elemento não existe no conjunto
             >=0 - posição do elemento no conjunto
  =========================================================*/
int buscaBinaria(TConjunto const * const conjA, int elemento);