#include <stdio.h>
#include <math.h>


int main() {
    int n, j;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    printf("\nOs numeros naturais de 0 a %d em ordem crescente sao:\n", n);

    for (j = 0; j <= n; j++) {
        printf("%d ", j);
    }

    printf("\n");

    return 0;
}