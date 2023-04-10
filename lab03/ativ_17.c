#include <stdio.h>
#include <math.h>

int main() {
    float chico = 1.50, ze = 1.10;
    int ano = 0;

    while (chico >= ze) {
        chico += 0.02;
        ze += 0.03;
        ano++;
    }

    printf("Serao necessarios %d anos para Ze ser maior que Chico.\n", ano);

    return 0;
}
