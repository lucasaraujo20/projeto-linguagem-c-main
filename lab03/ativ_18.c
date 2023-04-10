#include <stdio.h>
#include <math.h>

int main() {

    int ano = 1996;
    double sal = 2000;
    double aument = 1.5;

    while (ano <= 2022) {

        aument *= 2;
        sal += sal * (aument/100);
        ano++;

    }

    printf("Salario atual do funcionario em 2022: R$ %.2lf\n", sal);

    return 0;
}
