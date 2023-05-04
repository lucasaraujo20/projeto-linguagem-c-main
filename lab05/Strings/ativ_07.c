#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], nova_frase[100];
    int i, j = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin); 

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') { 
            nova_frase[j] = frase[i]; 
            j++;
        }
    }

    nova_frase[j] = '\0'; 

    printf("Frase sem espacos em branco: %s", nova_frase);

    return 0;
}
