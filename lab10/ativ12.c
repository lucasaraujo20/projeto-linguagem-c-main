#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define maax 1000

int main() {
    char fileName[100];
    char buffer[maax];
    int characterCount = 0;
    int lineCount = 0;
    int wordCount = 0;
    int letterCount[26] = {0};


    printf("Digite o nome do arquivo: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

 
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

 
    while (fgets(buffer, sizeof(buffer), file)) {
        int i = 0;
        int wordStarted = 0;


        for (i = 0; buffer[i] != '\0'; i++) {
            if (!isspace(buffer[i])) {
                characterCount++;
            }
        }


        lineCount++;


        for (i = 0; buffer[i] != '\0'; i++) {
            if (isspace(buffer[i])) {
                wordStarted = 0;
            } else if (!wordStarted) {
                wordCount++;
                wordStarted = 1;
            }
        }

        for (i = 0; buffer[i] != '\0'; i++) {
            char c = buffer[i];
            if (isalpha(c) && !isalnum(buffer[i + 1])) {
                int index = tolower(c) - 'a';
                if (index >= 0 && index < 26) {
                    letterCount[index]++;
                }
            }
        }
    }


    fclose(file);

   
    printf("Numero de caracteres: %d\n", characterCount);
    printf("Numero de linhas: %d\n", lineCount);
    printf("Numero de palavras: %d\n", wordCount);

    printf("Ocorrencias de cada letra:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, letterCount[i]);
    }

    return 0;
}
