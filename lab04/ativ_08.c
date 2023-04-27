
#include <stdio.h>
#include <math.h>

float hipo(float a, float b);

int main(){

    float a, b, receb;

    printf("Digite a espaco depois b: ");
    scanf("%f %f",&a,&b);

    receb = hipo(a,b);

    printf("A hipotenusa eh: %.2f ",receb);


    return 0;
}




float hipo(float a, float b)
{
    float hip;
    hip = (a*a)+(b*b);
    return  sqrt(hip) ;
}
 