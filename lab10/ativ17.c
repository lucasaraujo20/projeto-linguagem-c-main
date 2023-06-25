#include <stdio.h>
#include <stdlib.h>

void zeraPosicoes(int** matriz, int linhas, int colunas, int qtdPosicoes, int** posicoes);



int main() {
    int linhas, colunas, qtdPosicoes;
    FILE *arquivoEntrada, *arquivoSaida;


    arquivoEntrada = fopen("matriz.txt", "r");
    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }


    fscanf(arquivoEntrada, "%d %d %d", &linhas, &colunas, &qtdPosicoes);


    int** matriz = (int**) malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }


    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = 1;
        }
    }


    int** posicoes = (int**) malloc(qtdPosicoes * sizeof(int*));
    for (int i = 0; i < qtdPosicoes; i++) {
        posicoes[i] = (int*) malloc(2 * sizeof(int));
        fscanf(arquivoEntrada, "%d %d", &posicoes[i][0], &posicoes[i][1]);
    }

    zeraPosicoes(matriz, linhas, colunas, qtdPosicoes, posicoes);


    fclose(arquivoEntrada);


    arquivoSaida = fopen("matriz_saida.txt", "w");
    if (arquivoSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(arquivoSaida, "%d ", matriz[i][j]);
        }
        fprintf(arquivoSaida, "\n");
    }

 
    fclose(arquivoSaida);

    printf("Arquivo de saida gerado com sucesso.\n");


    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    for (int i = 0; i < qtdPosicoes; i++) {
        free(posicoes[i]);
    }
    free(posicoes);
}


void zeraPosicoes(int** matriz, int linhas, int colunas, int qtdPosicoes, int** posicoes) {
    for (int i = 0; i < qtdPosicoes; i++) {
        int linha = posicoes[i][0];
        int coluna = posicoes[i][1];
        matriz[linha][coluna] = 0;
    }
}
