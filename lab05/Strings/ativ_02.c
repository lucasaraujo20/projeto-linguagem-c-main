#include <stdio.h>
#include <string.h>

int contarum(char* str);

int main() {
    char str[50];
    int num;

    printf("Digite uma string contendo 0's e 1's: ");
    scanf("%s", str);

    num = contarum(str);

    printf("O numero de 1's na string eh: %d\n", num);

    return 0;
}

int contarum(char* str) {
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '1') {
            count++;
        }
    }

    return count;
}
