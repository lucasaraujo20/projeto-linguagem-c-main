#include <stdio.h>
#include <string.h>

void codificaCesar(char s[]) {
    int i, tam = strlen(s);
    for (i = 0; i < tam; i++) {

        if (s[i] >= 'A' && s[i] <= 'Z') { 

            s[i] = ((s[i] - 'A' + 3) % 26) + 'A';

        } else if (s[i] >= 'a' && s[i] <= 'z') { 
            
            s[i] = ((s[i] - 'a' + 3) % 26) + 'a';
        }
    }
}

int main() {
    char s[100];
    printf("Digite uma string: ");
    fgets(s, sizeof(s), stdin);

    printf("String original: %s", s);

    codificaCesar(s);

    printf("String codificada: %s", s);

    return 0;
}
