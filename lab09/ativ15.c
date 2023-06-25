#include <stdio.h>
#include <stdlib.h>

void encontrarMaioresNumeros(int** matriz, int linhas, int colunas);

int main() {
    int N, M;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &N);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &M);

    int** matriz = (int**)malloc(N * sizeof(int*));
    if (matriz == NULL) {
        return 1;
    }

    int i, j;
    for (i = 0; i < N; i++) {
        matriz[i] = (int*)malloc(M * sizeof(int));
        if (matriz[i] == NULL) {
            for (j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    encontrarMaioresNumeros(matriz, N, M);

    for (i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

void encontrarMaioresNumeros(int** matriz, int linhas, int colunas) {
    int maior1 = matriz[0][0];
    int maior2 = matriz[0][0];
    int maior3 = matriz[0][0];
    int linha1 = 0, coluna1 = 0;
    int linha2 = 0, coluna2 = 0;
    int linha3 = 0, coluna3 = 0;

    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] > maior1) {
                maior3 = maior2;
                linha3 = linha2;
                coluna3 = coluna2;

                maior2 = maior1;
                linha2 = linha1;
                coluna2 = coluna1;

                maior1 = matriz[i][j];
                linha1 = i;
                coluna1 = j;
            } else if (matriz[i][j] > maior2) {
                maior3 = maior2;
                linha3 = linha2;
                coluna3 = coluna2;

                maior2 = matriz[i][j];
                linha2 = i;
                coluna2 = j;
            } else if (matriz[i][j] > maior3) {
                maior3 = matriz[i][j];
                linha3 = i;
                coluna3 = j;
            }
        }
    }

    printf("Os tres maiores numeros sao:\n");
    printf("Maior 1: %d (linha: %d, coluna: %d)\n", maior1, linha1, coluna1);
    printf("Maior 2: %d (linha: %d, coluna: %d)\n", maior2, linha2, coluna2);
    printf("Maior 3: %d (linha: %d, coluna: %d)\n", maior3, linha3, coluna3);
}
