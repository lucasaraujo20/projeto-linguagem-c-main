#include <stdio.h>

void triangulo_lateral(int a);

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    triangulo_lateral(n);

    return 0;
}

void triangulo_lateral(int a) {
    int i, j;


    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = a-1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}