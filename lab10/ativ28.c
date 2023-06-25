#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_SIZE 30

void inverterString(char* str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

void inverterArquivo(const char* arquivoEntrada, const char* arquivoSaida) {
    FILE* arquivoEntradaPtr = fopen(arquivoEntrada, "r");
    FILE* arquivoSaidaPtr = fopen(arquivoSaida, "w");

    if (arquivoEntradaPtr == NULL || arquivoSaidaPtr == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    char linha[MAX_LINE_SIZE];

    while (fgets(linha, MAX_LINE_SIZE, arquivoEntradaPtr) != NULL) {
        inverterString(linha);
        fprintf(arquivoSaidaPtr, "%s", linha);
    }

    fclose(arquivoEntradaPtr);
    fclose(arquivoSaidaPtr);

    printf("Arquivo invertido com sucesso.\n");
}

int main() {
    char arquivoEntrada[100];
    char arquivoSaida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arquivoEntrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arquivoSaida);

    inverterArquivo(arquivoEntrada, arquivoSaida);

    return 0;
}

