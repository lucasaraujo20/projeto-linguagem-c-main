#include <stdio.h>
#include <math.h>

int main() {
    int vetor[10];
    int i, j, primo;

 
    for (i = 0; i < 10; i++) {
        printf("Informe o %do número: ", i+1);
        scanf("%d", &vetor[i]);

        primo = 1;
        for (j = 2; j <= sqrt(vetor[i]); j++) {
            if (vetor[i] % j == 0) {
                primo = 0;
                break;
            }
        }
        if (primo && vetor[i] > 1) {
            printf("%d (posição %d)\n", vetor[i], i);
        }
    }

    return 0;
}
