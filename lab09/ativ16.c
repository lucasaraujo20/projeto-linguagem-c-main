#include <stdio.h>
#include <stdlib.h>

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


    int** transposta = (int**)malloc(M * sizeof(int*));
    if (transposta == NULL) {
        for (i = 0; i < N; i++) {
            free(matriz[i]);
        }
        free(matriz);
        return 1;
    }

    for (i = 0; i < M; i++) {
        transposta[i] = (int*)malloc(N * sizeof(int));
        if (transposta[i] == NULL) {
            for (j = 0; j < i; j++) {
                free(transposta[j]);
            }
            free(transposta);
            for (j = 0; j < N; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        free(matriz[i]);
    }
    free(matriz);

    for (i = 0; i < M; i++) {
        free(transposta[i]);
    }
    free(transposta);

    return 0;
}
