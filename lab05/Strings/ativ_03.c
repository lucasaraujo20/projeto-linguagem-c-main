#include <stdio.h>
#include <string.h>

int main() {
    char pl[100];
    int tamanho, i;

    printf("Digite uma palavra: ");
    scanf("%s", pl);

    tamanho = strlen(pl);

    printf("Palavra de tras-para-frente: ");
    
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", pl[i]);
    }
    printf("\n");

}