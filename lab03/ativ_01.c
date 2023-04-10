#include <stdio.h>
#include <math.h>


int main(){

    int multiplo = 0, cont;


    if( multiplo >= 0){
        printf("Numero valido \n");

   
   
   

    while( cont <= 5){

        if( multiplo % 3 == 0 ){
            printf(" Os multiplos sao: %d \n", multiplo);
            cont++;
        }
        multiplo++;
    }


    }else{
     printf("Numero invalido \n");
    }

    return 0;
}


