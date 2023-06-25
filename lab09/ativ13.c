#include <stdio.h>
#include <stdlib.h>

int **alocarMatriz(int linhas, int colunas) {
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        return NULL; 
    }

    matriz[0] = (int *)malloc(linhas * colunas * sizeof(int));
    if (matriz[0] == NULL) {
        free(matriz);
        return NULL; 
    }

    int i, j;
    for (i = 1; i < linhas; i++) {
        matriz[i] = matriz[i-1] + colunas;
    }

    return matriz;
}

void liberarMatriz(int **matriz) {
    if (matriz == NULL) {
        return;
    }

    free(matriz[0]);
    free(matriz);
}

void lerMatriz(int **matriz, int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int buscaValorMatriz(int **matriz, int linhas, int colunas, int valor) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int linhas, colunas;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = alocarMatriz(linhas, colunas);
    if (matriz == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        return 1;
    }

    lerMatriz(matriz, linhas, colunas);

    int valor;
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int resultado = buscaValorMatriz(matriz, linhas, colunas, valor);
    if (resultado == 1) {
        printf("O valor esta presente na matriz.\n");
    } else {
        printf("O valor nao esta presente na matriz.\n");
    }

    liberarMatriz(matriz);

    return 0;
}
