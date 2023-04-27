#include <stdio.h>

int primo(int n);

int quant_primos_abaixo_de_n(int n);

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int quant_primos = quant_primos_abaixo_de_n(n);
    printf("A quantidade de numeros primos abaixo de %d eh %d.\n", n, quant_primos);

    return 0;
}

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int quant_primos_abaixo_de_n(int n) {
    int count = 0;

    for (int i = 2; i < n; i++) {
        if (primo(i)) {
            count++;
        }
    }
    return count;
}