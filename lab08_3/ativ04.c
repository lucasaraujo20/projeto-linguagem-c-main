
#include <stdio.h>

int tres( int *a , int *b, int *c);

int main(){

        int a , b , c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);


    tres(&a,&b, &c);

    printf("Menor valor eh: %d e medio: %d  maior: %d\n", a, b ,c);


    return 0;
}

int tres( int *a , int *b, int *c){

    int t = *a;
    

    if ( *b < *a){
        *a = *b;
        *b = t;

    } else if( *a > *b){
        *a = *a;
        *b = *b;
    } else if( *a < *c){
        *a = *a;
        *c = *c;
    } else if ( *c > *a){
        *a = *c;
        *c = *c;

    } else if ( *a == *b || *a == *c || *b == *c ){

        return 1;
    }

}