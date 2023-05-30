#include <stdio.h>

int stringOcorrencia(char *str1, char *str2) {
    char *p1, *p2, *pTemp;

    while (*str1) {
        p1 = str1;
        p2 = str2;
        pTemp = str1;

        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        if (!*p2) {
            return 1; 
        }

        if (!*p1) {
            return 0; 
        }

        str1++;
    }

    return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (stringOcorrencia(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string nao ocorre dentro da primeira.\n");
    }

    return 0;
}
