#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n, j, d1, d2;

    srand(time(NULL));

    printf("Digite o numero de lancamentos de dados: ");
    scanf("%d", &n);

    for (j = 0; j < n; j++) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        printf("Lancamento %d: d1 = %d, d2 = %d, ", j+1, d1, d2);

        if (d1 > d2) {
            printf("d1 > d2\n");
        } else if (d1 < d2) {
            printf("d1 < d2\n");
        } else {
            printf("d1 = d2\n");
        }
    }

    return 0;
}