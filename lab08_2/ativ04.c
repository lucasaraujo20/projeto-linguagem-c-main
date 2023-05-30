
#include <stdio.h>



int main(){

    int vet[5];
    int i;

    for( i = 0; i < 5; i++){
        printf(" Digite o valor de i: ", i);
        scanf("%d", (vet+i));
    }


    for( i=0; i < 5; i++){

        if( *(vet+i)%2 == 0 ){
            printf("Pares: %p \n", (vet+i));
        }
        
    }


    
    return 0;
}
