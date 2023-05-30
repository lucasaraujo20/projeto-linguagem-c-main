#include <stdio.h>

int main() {
    int A, *B, **C, ***D;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    int dobro = *(*B) * 2;
    int triplo = *(*(*C)) * 3;
    int quadruplo = *(*(*(*D))) * 4;

    printf("dobro de A: %d\n", dobro);
    printf("triplo de A: %d\n", triplo);
    printf("quadruplo de A: %d\n", quadruplo);

    return 0;
}

