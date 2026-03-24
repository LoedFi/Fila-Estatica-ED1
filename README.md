# Implementação de Fila Estática Circular em C

Este repositório contém uma implementação em linguagem C de uma **Fila Estática Circular**. A estrutura utiliza um array alocado dinamicamente na sua criação, mas possui um tamanho máximo fixo estipulado pelo usuário. A lógica circular permite o reaproveitamento inteligente de espaços de memória deixados por elementos que já foram desenfileirados.

##  Estrutura dos Arquivos

* `FilaEstatica.h`: Arquivo de cabeçalho contendo a definição da `struct TFila` e as assinaturas de todas as funções da estrutura de dados.
* `FilaEstatica.c`: Implementação das funções e regras de negócio da fila (inserção, remoção, verificação de limites, etc.).
* `main.c`: Arquivo de testes demonstrando na prática a inicialização, manipulação e liberação da fila, incluindo testes de limite (tentar inserir em fila cheia e lógica circular).

##  Funcionalidades Principais

A API da fila possui as seguintes operações principais:

* **`criarFila`**: Inicializa a fila, alocando o espaço necessário na memória com base no tamanho máximo desejado.
* **`enfileirar`**: Insere um novo número inteiro no final da fila.
* **`desenfileirar`**: Remove o elemento que está no início da fila.
* **`acessar`**: Retorna o elemento do início da fila sem removê-lo.
* **`mostrarFila`**: Retorna uma string formatada (ex: `Fila: {105 205 305}`) facilitando a visualização.
* **`liberarFila`**: Libera com segurança a memória que foi alocada dinamicamente, evitando vazamentos (*memory leaks*).
* **Funções de Validação**: `filaEstaVazia` e `filaEstaCheia` para controle de fluxo.
