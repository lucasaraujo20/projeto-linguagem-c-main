#include <stdio.h>

void gera_triangulo(int n);

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    gera_triangulo(n);
    return 0;
}

void gera_triangulo(int n) {
    int espacos = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i + 1; j++) {
            printf("*");
        }
        printf("\n");
        espacos--;
    }
}
