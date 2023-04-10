#include <stdio.h>
#include <math.h>

int main() {
    int j, num = 0, soma = 0;

    printf("Os 50 primeiros numeros pares sao:\n");

    for (j = 1; j <= 50; j++) {
        num += 2; 
        printf("%d ", num);
        soma += num;
    }

    printf("\nA soma dos 50 primeiros numeros pares eh: %d\n", soma);

    return 0;
}