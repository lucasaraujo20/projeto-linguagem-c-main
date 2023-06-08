#include <stdio.h>

void fracao(float num, int *inteiro, float *frac){
    *inteiro = num;
    *frac = num - *inteiro;
}

int main(){

    float num;

    int inteiro;

    float frac;

    scanf("%f",&num);

    fracao(num,&inteiro,&frac);

    printf("Inteiro: [%d]\n fracionario: [%.2f]",inteiro,frac);
    return 0;
}