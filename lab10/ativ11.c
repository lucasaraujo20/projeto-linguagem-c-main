#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char fileName[100];
    char word[100];
    char buffer[100];
    int count = 0;

    printf("Digite o nome do arquivo: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    printf("Digite a palavra a ser buscada: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';


    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file)) {

        char *match = strstr(buffer, word);
        while (match != NULL) {
            count++;
            match = strstr(match + 1, word);
        }
    }


    fclose(file);

    printf("A palavra '%s' aparece %d vezes no arquivo.\n", word, count);

    return 0;
}
