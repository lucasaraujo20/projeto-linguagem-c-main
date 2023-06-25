#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputFileName[100];
    char outputFileName[100];

    printf("Digite o nome do arquivo de entrada: ");
    fgets(inputFileName, sizeof(inputFileName), stdin);
    inputFileName[strcspn(inputFileName, "\n")] = '\0';
    strcat(inputFileName, ".txt");

    printf("Digite o nome do arquivo de saida: ");
    fgets(outputFileName, sizeof(outputFileName), stdin);
    outputFileName[strcspn(outputFileName, "\n")] = '\0';
    strcat(outputFileName, ".txt");

    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Arquivo de entrada nao existe.\n");
        exit(1);
    }

    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(inputFile);
        exit(1);
    }

    int ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("sucesso: %s\n", outputFileName);

    return 0;
}
