#include <stdio.h>
#include <math.h>

int main() {
    int n, j, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("\nOs divisores de %d, com excecao dele proprio, sao:\n", n);

    for (j = 1; j< n; j++) {
        if (n % j == 0) {
            printf("%d ", j);
            soma += j;
        }
    }

    printf("\nA soma dos divisores de %d, com excecao dele proprio, eh: %d\n", n, soma);

    return 0;
}
