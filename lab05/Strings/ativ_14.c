#include <stdio.h>
#include <string.h>

int main() {

    char str1[50], str2[50];
    int n;

    printf("Digite a primeira string: ");

    fgets(str1, 50, stdin);

    printf("Digite a segunda string: ");

    fgets(str2, 50, stdin);

    printf("Digite o valor de N: ");

    scanf("%d", &n);

    
    str1[strcspn(str1, "\n")] = '\0';
    
    str2[strcspn(str2, "\n")] = '\0';

    
    strncat(str1, str2, n);

    printf("Nova string: %s\n", str1);

    return 0;
}
