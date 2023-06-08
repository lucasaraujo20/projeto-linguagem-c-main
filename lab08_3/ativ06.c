#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume) {
    const float PI = 3.14159265359;
    *area = 4 * PI * pow(R, 2);
    *volume = (4.0/3.0) * PI * pow(R, 3);
}

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area da superficie: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
