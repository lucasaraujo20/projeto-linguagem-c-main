#include <stdio.h>

int main(){
    
    int A[7] =  {1, 0, 5, -2, -5, 7};
    int receb, i, vet;


    receb = A[0] + A[1] + A[5];

    printf("A soma eh: %d \n", receb);

    A[4]= 100;

    for (i = 0; i < 6 ; i++)
    {
        printf("Vetor %d = %d \n ",vet++ ,A[i] );
    }
    

    return 0;
}