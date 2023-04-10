#include <stdio.h>
#include <math.h>

int main() {
    int j, soma = 0;

    printf("Todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 sao:\n");

    for (j = 1; j < 1000; j++) {

        if (j % 3 == 0 || j % 5 == 0) {

            printf("%d ", j);
            soma += j;
        }
    }

    printf("\nA soma dos numeros naturais eh: %d\n", soma);

    return 0;
}
