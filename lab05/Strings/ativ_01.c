#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("A palavra digitada eh: %s", str);

    return 0;
}
