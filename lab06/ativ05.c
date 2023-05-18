#include <stdio.h>

typedef struct {
    float a;
    float b;
    float c;
} VetR3;

VetR3 sumvet (VetR3 v1, VetR3 v2) {
    VetR3 result;
    result.a = v1.a + v2.a;
    result.b = v1.b + v2.b;
    result.c = v1.c + v2.c;
    return result;
}

int main() {
    VetR3 vet1, vet2, sum;

    printf("Digite as coordenadas do primeiro vetor (a, b, c): ");
    scanf("%f %f %f", &vet1.a, &vet1.b, &vet1.c);

    printf("Digite as coordenadas do segundo vetor (a, b, c): ");
    scanf("%f %f %f", &vet2.a, &vet2.b, &vet2.c);

    sum = sumvet (vet1, vet2);

    printf("A soma dos vetores resulta em (%.2f, %.2f, %.2f)\n", sum.a, sum.b, sum.c);

    return 0;
}
