
#include <stdio.h>

int conversor(float a);

int main(){

    float fahrenheit, receb;

    printf("Digite o valor em Celsius: ");
    scanf("%f",&fahrenheit);

    receb = conversor(fahrenheit);

    printf("O valor eh %.2f fahrenheit ", receb);

    return 0;
}



int conversor(float a)
{
    return a * ( 9.0/5.0)+ 32.0;
}