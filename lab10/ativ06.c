#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define alfabeto 26

int main() {

    char fileName[100];
    int letterCount[alfabeto] = {0};

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
        if (isalpha(ch)) {
            ch = tolower(ch);
            letterCount[ch - 'a']++;
        }
    }

    fclose(arq);

    for (int i = 0; i < alfabeto; i++) {
        printf("Letra %c: %d\n", 'a' + i, letterCount[i]);
    }

    return 0;
}
