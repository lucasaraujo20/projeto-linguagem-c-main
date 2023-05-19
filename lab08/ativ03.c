#include <stdio.h>

int main(){

    int a, b;
    int *p, *q;

    p = &a;
    q = &b;

    if( p > q){

        printf("Maior endereco eh %p de a \n", p);
    }else if ( q > p){

        printf("Maior endereco eh %p de b \n", q);
    }


    return 0;
}