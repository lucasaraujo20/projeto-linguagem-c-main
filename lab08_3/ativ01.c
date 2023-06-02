#include <stdio.h>


int dois( int *A , int *B);

int main(){

    int a , b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);


    dois(&a,&b);

    printf("O valor eh: A = %d B = %d \n", a, b);

    return 0;
}

int dois( int *A , int *B){
    int t = *A;
    *A = *B;
    *B = t;
}