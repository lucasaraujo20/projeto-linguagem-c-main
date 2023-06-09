#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    float **matriz = (float **)malloc(linhas * sizeof(float *));
    if (matriz == NULL) {
        return 1;
    }

    int i, j;
    for (i = 0; i < linhas; i++) {
        matriz[i] = (float *)malloc(colunas * sizeof(float));
        if (matriz[i] == NULL) {
            for (j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
