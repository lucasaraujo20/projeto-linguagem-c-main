#include <stdio.h>

int main(){
    int mat[4][4];
    int i, j;
    int maior, receb1 = 0, receb2 = 0;

    // preenche a matriz
    for (i = 0; i < 4 ; i++){
        for (j = 0; j < 4 ; j++){
            printf("Qual o valor na posicao i[%d] j[%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

  
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n"); 
    }

    
    maior = mat[0][0];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                receb1 = i;
                receb2 = j;
            }
        }
    }

    printf("A posicao do maior valor eh i[%d] j[%d], sendo o maior valor %d\n", receb1, receb2, maior);

    return 0;
}
