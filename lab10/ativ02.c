#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char fileName[100];
    int contaLinhas = 0;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';
    strcat(fileName, ".txt");

    FILE *arq = fopen(fileName, "r");
    if (arq == NULL) {
        printf("Arquivo nao existe\n");
        exit(1);
    }

    int ch;
    while ((ch = fgetc(arq)) != EOF) {
        if (ch == '\n') {
            contaLinhas++;
        }
    }

    fclose(arq);

    printf("O arquivo tem %d linhas\n", contaLinhas);

    return 0;
}
