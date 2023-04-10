#include <stdio.h>
#include <math.h>


int main() {
    int num, j, count = 0, sum = 0;
    float media;

    printf("Digite 10 valores inteiros positivos:\n");

    for (j = 1; j <= 10; j++) {
        printf("valor %d: ", j);
        scanf("%d", &num);

        if (num > 0) { 
            count++; 
            sum += num; 
        }
    }

    if (count > 0) {
        media = (float)sum / count; 

        printf("\nA media dos valores positivos eh: %.2f\n", media);

    } else {
        printf("\nNenhum valor positivo foi digitado.\n");
    }

    return 0;
}