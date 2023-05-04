#include <stdio.h>

int main() {
    int mat[5][5];
    int i,  j,x, found = 0;
    

   

    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++) {
  
            printf(" Coloque o valor na pocicao i[%d] j[%d]: ", i,j);

            scanf("%d", &mat[i][j]);
        }
    }


    printf("\n");
    
    printf("Coloque o valor a ser buscado: ");
    scanf("%d", &x);


    for (i = 0; i < 5; i++) {

        for (j = 0; j < 5; j++) {

            if (mat[i][j] == x) {

                printf("O valor %d foi encontrado na posicao [%d][%d]\n", x, i, j);
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    }
    
    if (found == 0) {

        printf("O valor %d nao foi encontrado \n", x);
    }
    
    return 0;
}
