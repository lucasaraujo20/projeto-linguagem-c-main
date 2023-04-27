#include <stdio.h>


int formaTriangulo(float a, float b, float c);

void tipoTriangulo(float a, float b, float c);

int main() {
    float a, b, c;
    
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (formaTriangulo(a, b, c)) {

        tipoTriangulo(a, b, c);
    } else {
        printf("Nao forma um triangulo\n");
    }
    
    return 0;
}

int formaTriangulo(float a, float b, float c) {
    if (a < b + c && b < a + c && c < a + b) {

        return 1;
    } else {

        return 0;
    }
}


void tipoTriangulo(float a, float b, float c) {
    if (a == b && b == c) {

        printf("Triangulo equilatero\n");

    } else if (a == b || a == c || b == c) {

        printf("Triangulo isosceles\n");
    } else {

        printf("Triangulo escaleno\n");
    }
}
