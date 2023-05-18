#include <stdio.h>
#include <math.h>

struct cordenada
{
    float raio;
    float a;
    float x;
    float y;
};
int main()
{
    struct cordenada p;

    printf("Digite o raio: ");
    scanf("%f", &p.raio);

    printf("Digite o argumento: ");
    scanf("%f", &p.a);

    p.x = p.raio*cos(p.a);
    p.y = p.raio*sin(p.a);

    printf("Resultado :(%.2f,%.2f)", p.x, p.y);

    return 0;
}