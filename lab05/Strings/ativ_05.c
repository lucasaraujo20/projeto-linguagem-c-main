#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma palavra em letras maiusculas: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) { 
            str[i] = str[i] + 32; 
        }
    }

    printf("Palavra em letras minusculas: %s\n", str);

    return 0;
}
