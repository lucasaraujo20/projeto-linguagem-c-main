#include <stdio.h>


int main(){

    int A, B;
    int *p;
    int *q;
    int receb;
    p = &A;
    q = &B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    A = (*p)*2;
    printf(" dobro de A e %d \n", A);
    B = (*q)*2;
     printf(" dobro de B e %d \n", B);
    receb = A + B;

    
   

    printf("A soma do dobro de A e B eh %d \n", receb);


    return 0;
}