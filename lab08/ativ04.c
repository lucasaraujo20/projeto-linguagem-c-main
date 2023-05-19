#include <stdio.h>


int main(){

    int a, b;
    int *p;
    int *q;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    p = &a;
    q = &b;

    if( p > q){

        printf("Maior endereco eh de a, a = %d  \n", *p);
    }else if ( q > p){

        printf("Maior endereco eh de b, b = %d \n", *q);
    }



   

    return 0;
}