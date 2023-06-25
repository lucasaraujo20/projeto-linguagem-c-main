#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    FILE *arquivo2;
    char caractere;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    arquivo2 = fopen("arq.txt", "w");

    if (arquivo == NULL || arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        fputc(caractere, arquivo2);
    }

    fclose(arquivo);
    fclose(arquivo2);

    arquivo2 = fopen("arq.txt", "r+");
    if (arquivo2 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo2)) != EOF) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
            fseek(arquivo2, -1, SEEK_CUR);
            fputc('*', arquivo2);
        }
    }

    fclose(arquivo2);

    arquivo2 = fopen("arq.txt", "r");
    printf("Trocando todas as vogais por \"*\" no arquivo auxiliar\n");

    while ((caractere = fgetc(arquivo2)) != EOF) {
        printf("%c", caractere);
    }

    fclose(arquivo2);

    return 0;
}
