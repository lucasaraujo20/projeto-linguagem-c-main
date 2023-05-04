#include <stdio.h>
#include <string.h>

int main() {

    char string[100];
    int i, j, palindromo = 1;

    printf("Digite uma string: ");
    gets(string);

    for (i = 0, j = strlen(string) - 1; i < j; i++, j--) {
        if (string[i] != string[j]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("A string eh um palindromo\n");
    } else {
        printf("A string nao eh um palindromo\n");
    }

    return 0;
}
