#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR_BYTES 1024
#define DIMENSAO_MATRIZ 10
#define TAMANHO_REGISTROS 50
#define MAX_LINHAS_TEXTO 100
#define TAMANHO_LINHA_TEXTO 80

typedef struct {
    char nome[31];
    int codigo;
    float preco;
} Registro;

int main() {

    char* vetor = (char*)malloc(TAMANHO_VETOR_BYTES * sizeof(char));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria para o vetor.\n");
        return 1;
    }


    int** matriz = (int**)malloc(DIMENSAO_MATRIZ * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro ao alocar memoria para a matriz.\n");
        return 1;
    }
    for (int i = 0; i < DIMENSAO_MATRIZ; i++) {
        matriz[i] = (int*)malloc(DIMENSAO_MATRIZ * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria para a matriz.\n");
            return 1;
        }
    }


    Registro* registros = (Registro*)malloc(TAMANHO_REGISTROS * sizeof(Registro));
    if (registros == NULL) {
        printf("Erro ao alocar memoria para o vetor de registros.\n");
        return 1;
    }

    char** texto = (char**)malloc(MAX_LINHAS_TEXTO * sizeof(char*));
    if (texto == NULL) {
        printf("Erro ao alocar memoria para o texto.\n");
        return 1;
    }
    for (int i = 0; i < MAX_LINHAS_TEXTO; i++) {
        texto[i] = (char*)malloc((TAMANHO_LINHA_TEXTO + 1) * sizeof(char));
        if (texto[i] == NULL) {
            printf("Erro ao alocar memoria para o texto.\n");
            return 1;
        }
    }


    free(vetor);

    for (int i = 0; i < DIMENSAO_MATRIZ; i++) {
        free(matriz[i]);
    }
    free(matriz);

    free(registros);

    for (int i = 0; i < MAX_LINHAS_TEXTO; i++) {
        free(texto[i]);
    }
    free(texto);

    return 0;
}


