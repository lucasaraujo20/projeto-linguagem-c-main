#include <stdio.h>
#include <stdbool.h>

#define LIMITE 2000000

int main() {
    bool num[LIMITE];
    long long soma = 0;

   
    for (int j = 2; j < LIMITE; j++) {
        num[j] = true;
    }

   
    for (int j = 2; j < LIMITE; j++) {
        if (num[j]) {
            for (int x = j * 2; x < LIMITE; x += j) {
                num[x] = false;
            }
        }
    }

    
    for (int j = 2; j < LIMITE; j++) {
        if (num[j]) {
            soma += j;
        }
    }

    printf("A soma de todos os numeros primos abaixo de 2 milhoes eh: %lld", soma);

    return 0;
}
