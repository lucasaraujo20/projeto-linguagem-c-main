#include <stdio.h>

int eh_primo(int num) {
    int j;

    if (num < 2) {
        return 0;
    }

    for (j = 2; j <= num/2; j++) {
        if (num % j == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int a, b, j, cont = 0;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    for (j = a; j <= b; j++) {
        if (eh_primo(j)) {
            cont++;
        }
    }

    printf("Existem %d numeros primos entre %d e %d.\n", cont, a, b);

    return 0;
}
