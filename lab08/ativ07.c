#include <stdio.h>

int main(){

    int a, b, c;
    int *p;
    int *q;
    int *z;
    p = &a;
    q = &b;
    z = &c;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);


    if( a > b && b < a && c < b){

        printf("Ordem crescente: %d,%d,%d \n", a,b,c);
        printf("Numero do endereco : %p,%p,%p \n", p,q,z);

    }else if ( b > a && a < b && c < a){

        printf("Ordem crescente: %d,%d,%d \n", a,b,c);
        printf("Numero do endereco : %p,%p,%p \n", p,q,z);


    }else if ( c > a && a < b && c > b ){

        printf("Ordem crescente: %d,%d,%d \n", a,b,c);
        printf("Numero do endereco : %p,%p,%p \n", p,q,z);


    }else if ( c < a && a > b && c < b ){

        printf("Ordem crescente: %d,%d,%d \n", a,b,c);
        printf("Numero do endereco : %p,%p,%p \n", p,q,z);
    }



    return 0;
}