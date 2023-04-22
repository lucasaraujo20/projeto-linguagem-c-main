#include <stdio.h>
#include <math.h>

int perfeito(float a);

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

int perfeito(float a)
{
    return sqrt(a) * sqrt(a) == a;
}
