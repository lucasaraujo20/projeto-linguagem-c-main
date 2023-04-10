#include <stdio.h>
#include <math.h>

int main() {
    int num, j, menor, maior;

    printf("Digite 10 valores inteiros:\n");
    scanf("%d", &num);

    
    menor = num;
    maior = num;

    for ( j = 2; j <= 10; j++) {
        printf("valor %d: ", j);
        scanf("%d", &num);

        if (num < menor) {
            menor = num; 
        }

        if (num > maior) {
            maior = num; 
        }
    }

    printf("\nO menor valor foi: %d\n", menor);
    printf("O maior valor foi: %d\n", maior);

    return 0;
}