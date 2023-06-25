#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeVogais(const char* str);

int main() {
    int tamanho;
    char* string;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    getchar(); 


    string = (char*)malloc((tamanho + 1) * sizeof(char));

    if (string == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        return 1;
    }

    printf("Digite o conteudo da string: ");
    fgets(string, tamanho + 1, stdin);


    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    printf("String original: %s\n", string);


    char* novaString = removeVogais(string);

    printf("String sem vogais: %s\n", novaString);

    free(string);
    free(novaString);

    return 0;
}

char* removeVogais(const char* str) {
    int tamanho = strlen(str);
    char* novaString = (char*)malloc((tamanho + 1) * sizeof(char));

    if (novaString == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa.\n");
        exit(1);
    }

    int i, j = 0;
    for (i = 0; i < tamanho; i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            novaString[j] = c;
            j++;
        }
    }

    novaString[j] = '\0';

    return novaString;
}
