#include <stdio.h>

void somaMatrizes(float matrizA[][2], float matrizB[][2]);
void subtraiMatrizes(float matrizA[][2], float matrizB[][2]);
void adicionaConstante(float matriz[][2], float constante);
void imprimeMatriz(float matriz[][2]);

int main() {
    float matrizA[2][2], matrizB[2][2], constante;
    int opcao;

 
    printf("Digite os valores da primeira matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matrizA[i][j]);
        }
    }

    printf("Digite os valores da segunda matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%f", &matrizB[i][j]);
        }
    }

    
    printf("Escolha uma opcao:\n");
    printf("1 - Somar as duas matrizes\n");
    printf("2 - Subtrair a primeira matriz da segunda\n");
    printf("3 - Adicionar uma constante as duas matrizes\n");
    printf("4 - Imprimir as matrizes\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            somaMatrizes(matrizA, matrizB);
            break;
        case 2:
            subtraiMatrizes(matrizA, matrizB);
            break;
        case 3:
            printf("Digite a constante a ser adicionada: ");
            scanf("%f", &constante);
            adicionaConstante(matrizA, constante);
            adicionaConstante(matrizB, constante);
            break;
        case 4:
            printf("Matriz A:\n");
            imprimeMatriz(matrizA);
            printf("Matriz B:\n");
            imprimeMatriz(matrizB);
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

void somaMatrizes(float matrizA[][2], float matrizB[][2]) {
    float matrizSoma[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Matriz soma:\n");
    imprimeMatriz(matrizSoma);
}

void subtraiMatrizes(float matrizA[][2], float matrizB[][2]) {
    float matrizSubtracao[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizSubtracao[i][j] = matrizB[i][j] - matrizA[i][j];
        }
    }

    printf("Matriz subtracao:\n");
    imprimeMatriz(matrizSubtracao);
}

void adicionaConstante(float matriz[][2], float constante) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] += constante;
        }
    }


    void imprimeMatriz(float matriz[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
    }


    return 0;
}
