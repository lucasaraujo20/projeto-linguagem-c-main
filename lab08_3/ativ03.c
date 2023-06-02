#include <stdio.h>



void soma( int *A, int *B);

int main(){

    int a, b;

     printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);


    soma(&a,&b);

    printf("Digite a soma eh : %d \n", a);

    return 0;

}

void soma( int *A, int *B){

    int t = *A;
    *A = *A + *B;

}