
#include <stdio.h>


float Vol(float raio, float altura);

int main(){
    
    float raio, altura, receb;

    printf("Digite o raio espaco e depois altura: ");
    scanf("%f %f", &raio, &altura);

    receb = Vol(raio,altura);

    printf("O volume do cilindro eh %.2f metros cubicos",receb);

    return 0;
}


float Vol(float raio, float altura)
{
    const float PI =  3.141592;
    return PI * (raio*raio) * altura;
}


