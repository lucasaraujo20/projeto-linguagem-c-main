#include <stdio.h>
#include <stdlib.h>

void inicializarMemoria(int* memoria, int tamanho);
void inserirValor(int* memoria, int posicao, int valor);
int consultarValor(const int* memoria, int posicao);

int main() {
    int tamanhoMemoria, tamanhoInteiro;
    int* memoria = NULL;
    int opcao, posicao, valor;

    printf("Digite o tamanho da memoria em bytes: ");
    scanf("%d", &tamanhoMemoria);

    tamanhoInteiro = sizeof(int);
    if (tamanhoMemoria % tamanhoInteiro != 0) {
        printf("Tamanho invalido, o tamanho da memoria deve ser multiplo do tamanho do tipo inteiro.\n");
        return 1;
    }

  
    memoria = (int*)malloc(tamanhoMemoria);

    if (memoria == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        return 1;
    }


    inicializarMemoria(memoria, tamanhoMemoria);

    while (1) {
        printf("\nOpcoes:\n");
        printf("1 -- Inserir valor em uma posicao\n");
        printf("2 -- Consultar valor em uma posicao\n");
        printf("0 -- Encerrar o programa\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                free(memoria); 
                return 0;
            case 1:
                printf("Digite a posicao de memoria em bytes: ");
                scanf("%d", &posicao);
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserirValor(memoria, posicao, valor);
                printf("Valor inserido com sucesso.\n");
                break;
            case 2:
                printf("Digite a posicao de memoria em bytes: ");
                scanf("%d", &posicao);
                valor = consultarValor(memoria, posicao);
                printf("Valor consultado: %d\n", valor);
                break;
            default:
                printf("Opcao invalida, digite uma opcao valida.\n");
                break;
        }
    }

    return 0;
}

void inicializarMemoria(int* memoria, int tamanho) {
    int i;
    int tamanhoInteiro = sizeof(int);
    int numElementos = tamanho / tamanhoInteiro;

    for (i = 0; i < numElementos; i++) {
        memoria[i] = 0;
    }
}

void inserirValor(int* memoria, int posicao, int valor) {
    int tamanhoInteiro = sizeof(int);
    int* endereco = (int*)((char*)memoria + posicao);

    *endereco = valor;
}

int consultarValor(const int* memoria, int posicao) {
    int tamanhoInteiro = sizeof(int);
    const int* endereco = (const int*)((const char*)memoria + posicao);

    return *endereco;
}
