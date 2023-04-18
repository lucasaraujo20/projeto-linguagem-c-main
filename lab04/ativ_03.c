#include <stdio.h>

int negativo_positivo(int a);

int main(){

    int n, receb;

    printf("Digite um numero: ");
    scanf("%d",& n);

    receb = negativo_positivo(n);

    if( receb > 0 ){

        printf("Numero positivo \n");

    }else if( receb == 0){

        printf("Numero 0 ");
    }else{
        printf(" Numero Negativo \n ");
    }


    return 0;
}

int negativo_positivo(int a)
{
    if( a > 0){
        return 1;
    }else if( a == 0 ){
        return 0;
    }else{
        return -1;
    }


}
