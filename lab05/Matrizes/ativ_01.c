#include <stdio.h>


int main(){


    int mat[4][4];
    int i, j;


    for( i = 0; i < 4 ; i++){

        for( j = 0; j < 4 ; j++){

            printf(" Qual o valor na posicao i[%d] j[%d] : ", i, j);
            scanf("%d",& mat[i][j]);

        }
    }

    printf("\n");


    
    for( i = 0; i < 4 ; i++){
        for( j = 0; j < 4 ; j++){

            if( mat[i][j] > 10){
                printf("Maior que 10 : %d \n", mat[i][j]);
            }
             
                
            }
      
        }

         return 0;
    }

        



   



