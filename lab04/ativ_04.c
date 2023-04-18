#include <stdio.h>
#include <math.h>

int perfeito(int a);

int main(){

    int n, receb;

    printf("Digite um numero: ");
    scanf("%d",& n);

    receb = perfeito(n);

    if ( receb == 1){

        printf("Numero quadrado perfeito \n");
    }else{
        printf("Numero imperfeito \n " );
    }



    return 0;
}

int perfeito(int a)
{
    int receb , receb2;
    receb = sqrt(a); 
    receb2 = a/receb;

    if(  a > 0 && receb2 == receb ){
        return 1;
    }else{
        return 0;
    }
}