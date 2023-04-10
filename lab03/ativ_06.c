#include <stdio.h>
#include <math.h>

int main(){

    int j, num, soma = 0;
    float media;
    
    printf("Digite 10 valores inteiros:\n");
    
    for (j = 1; j <= 10; j++) {

        printf("valor %d: ", j);

        scanf("%d", &num);
        
        soma += num;
        media = soma/j;
    }
    
    printf("\nA media dos 10 valores digitados eh: %.2f\n", media);
    
    return 0;
}

