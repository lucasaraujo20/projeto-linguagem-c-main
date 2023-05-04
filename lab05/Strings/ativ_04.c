#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pl[50], caractere;
    int vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", pl);


    for (int i = 0; i < strlen(pl); i++) {
        switch(tolower(pl[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogais++;
                break;
            default:
                break;
        }
    }

    printf("A palavra digitada possui %d vogais.\n", vogais);


    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);

    for (int i = 0; i < strlen(pl); i++) {
        switch(tolower(pl[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                pl[i] = caractere;
                break;
            default:
                break;
        }
    }

    printf("A palavra modificada eh: %s\n", pl);

    return 0;
}
