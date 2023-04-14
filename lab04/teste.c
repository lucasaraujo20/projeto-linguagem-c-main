#include <stdio.h>

int fat(float n);

int main(){

    int a ;
    float suco;

    printf("Digite um numero: ");
    scanf("%d",&a);

    suco = fat(a);

    printf(" O Fatorial eh: %f\n",suco);

    return 0;
}

int fat(float n){

    if(n == 1){

        return 1;
    }
    else{
        return n*fat(n-1);
    }

    return 0;
}