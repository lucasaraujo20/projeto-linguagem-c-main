#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[4][4];
    int i, j;

    srand(time(NULL));


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            mat[i][j] = rand() % 20 + 1;
        }
    }

    printf("matriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 4; j++) {
            mat[i][j] = 0;
        }
    }

    printf("matriz transformada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
