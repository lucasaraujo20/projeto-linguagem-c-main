#include <stdio.h>
#include <math.h>


int main() {

    int n, j, num = 1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("\nOs %d primeiros numeros naturais impares sao:\n", n);

    for (j = 1; j <= n; j++) {
        printf("%d ", num);
        num += 2; 
    }

    printf("\n");

    return 0;
}