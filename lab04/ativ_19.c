#include <stdio.h>

int fatorial(int n); 

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");

    scanf("%d", &n);

    int resultado = fatorial(n);

    printf("%d! = %d\n", n, resultado);
    return 0;
}

int fatorial(int n) {

    int i, fat = 1;

    for(i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}