#include<stdio.h>

void maiorme(int *x, int *y);

int main() {
    int A, B;


    printf("DIgite dois valores inteiros:\n");
    printf("Primeira Variavel:");
    setbuf(stdin, NULL);
    scanf("%d", &A);


    printf("Segunda Variavel:");
    setbuf(stdin, NULL);
    scanf("%d", &B);


    maiorme(&A, &B);
    printf("O maior valor na primeira variavel e o menor valor na segunda variavel\n");
    printf("Primeira Variavel: %d\n", A);
    printf("Segunda Variavel: %d", B);
    return 0;
}

void maiorme(int *x, int *y) {
    int temp;
    if (*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}
