#include <stdio.h>


int volume_esfera(float r);

int main(){

    float raio;
    float receb;

    printf("Digite o raio, para  calcular do volume de uma esfera: ");
    scanf("%f",& raio);

    receb = volume_esfera(raio);

    printf(" O volume eh: %.2f centimetros cubicos", receb);


    return 0;
}

int volume_esfera(float r)
{
    const float PI = 3.1416;
    return 4.0*PI*(r*r*r)/3.0;
}



