#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char fileName[100];
    char searchChar;
    int charCount = 0;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';
    strcat(fileName, ".txt");

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &searchChar);

    FILE *arq = fopen(fileName, "r");
    if (arq == NULL) {
        printf("Arquivo nao existe\n");
        exit(1);
    }

    int ch;
    while ((ch = fgetc(arq)) != EOF) {
        if (ch == searchChar) {
            charCount++;
        }
    }

    fclose(arq);
    printf("O arquivo %s tem %d ocorrencia do caractere '%c'\n", fileName, charCount, searchChar);
    return 0;
}
