#include <stdio.h>


int main(){

    int vet[5];
    int i;

    for( i = 0; i < 5; i++){
        printf(" Digite o valor de i: ", i);
        scanf("%d", (vet+i));
    }

    for( i = 0; i < 5; i++) {
        printf(" Valores: %d \n", (*(vet+i))*2);

    }


    return 0;
}
