#include <stdio.h>
#include <math.h>

int main(){

    int j, num, soma = 0;
    
    printf("Digite 10 valores inteiros:\n");
    
    for (j = 1; j <= 10; j++) {

        printf("valor %d: ", j);

        scanf("%d", &num);
        
        soma += num;
    }
    
    printf("\nA soma dos 10 valores digitados eh: %d\n", soma);
    
    return 0;
}


