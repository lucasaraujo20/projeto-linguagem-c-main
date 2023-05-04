#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j;
    
    printf("Digite a string S: ");
    scanf("%s", s);
    
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    
    printf("Digite o valor de j: ");
    scanf("%d", &j);
    
    if (i < 0 || j < 0 || i > strlen(s)-1 || j > strlen(s)-1) {
        printf("Indices invalidos\n");
        return 0;
    }
    
    printf("Segmento S[%d..%d]: ", i, j);
    for (int k = i; k <= j; k++) {
        printf("%c", s[k]);
    }
    printf("\n");
    
    return 0;
}
