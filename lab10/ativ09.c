#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char firstFileName[100];
    char secondFileName[100];
    char thirdFileName[100];

    printf("Digite o nome do primeiro arquivo: ");
    fgets(firstFileName, sizeof(firstFileName), stdin);
    
    firstFileName[strcspn(firstFileName, "\n")] = '\0';
    strcat(firstFileName, ".txt");

    printf("Digite o nome do segundo arquivo: ");
    fgets(secondFileName, sizeof(secondFileName), stdin);
    secondFileName[strcspn(secondFileName, "\n")] = '\0';
    strcat(secondFileName, ".txt");

    printf("Digite o nome do terceiro arquivo: ");
    fgets(thirdFileName, sizeof(thirdFileName), stdin);
    thirdFileName[strcspn(thirdFileName, "\n")] = '\0';
    strcat(thirdFileName, ".txt");

    FILE *firstFile = fopen(firstFileName, "r");
    if (firstFile == NULL) {
        printf("Primeiro arquivo não existe.\n");
        exit(1);
    }

    FILE *secondFile = fopen(secondFileName, "r");
    if (secondFile == NULL) {
        printf("Segundo arquivo não existe.\n");
        fclose(firstFile);
        exit(1);
    }

    FILE *thirdFile = fopen(thirdFileName, "w");
    if (thirdFile == NULL) {
        printf("Erro ao criar o terceiro arquivo.\n");
        fclose(firstFile);
        fclose(secondFile);
        exit(1);
    }

    int ch;
    while ((ch = fgetc(firstFile)) != EOF) {
        fputc(ch, thirdFile);
    }

    while ((ch = fgetc(secondFile)) != EOF) {
        fputc(ch, thirdFile);
    }

    fclose(firstFile);
    fclose(secondFile);
    fclose(thirdFile);

    printf("Arquivo criado com sucesso: %s\n", thirdFileName);

    return 0;
}
