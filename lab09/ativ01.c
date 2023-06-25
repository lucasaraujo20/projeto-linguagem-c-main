#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int *array, n = 5, i;
    array = (int*)malloc(n*sizeof(int));


    for(i = 0; i < n; i++){
        printf("Insira o valor de array[%d]: ", i);
        scanf("%d", &array[i]);
    }


    for(i = 0; i < n; i++){
        printf("Array[%d] = %d \n", i, array[i]);
    }

    free(array);
    return 0;
}