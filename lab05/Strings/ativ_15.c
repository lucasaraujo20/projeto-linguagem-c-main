#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

void check_substring(char s1[], char s2[]) {
    if (strstr(s1, s2) != NULL) {
        printf("A string S2 e uma substring de S1.\n");
    } else {
        printf("A string S2 nao e uma substring de S1.\n");
    }
}

int main() {
    char s1[MAX_SIZE+1];
    char s2[MAX_SIZE+1];
    char c1, c2;
    int opcao, pos, len;
    
    while (1) {
        printf("\n\nMENU\n");
        printf("1 - Ler uma string S1 (tamanho maximo 20 caracteres)\n");
        printf("2 - Imprimir o tamanho da string S1\n");
        printf("3 - Comparar a string S1 com uma nova string S2 fornecida pelo usuario\n");
        printf("4 - Concatenar a string S1 com uma nova string S2\n");
        printf("5 - Imprimir a string S1 de forma reversa\n");
        printf("6 - Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("7 - Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
        printf("8 - Verificar se uma string S2 e substring de S1\n");
        printf("9 - Retornar uma substring da string S1\n");
        printf("0 - Sair\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Digite uma string S1 (maximo %d caracteres): ", MAX_SIZE);
                scanf("%s", s1);
                break;
                
            case 2:
                printf("Tamanho da string S1: %lu\n", strlen(s1));
                break;
                
            case 3:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                if (strcmp(s1, s2) == 0) {
                    printf("As strings sao iguais.\n");
                } else {
                    printf("As strings sao diferentes.\n");
                }
                break;
                
            case 4:
                printf("Digite uma nova string S2: ");
                scanf("%s", s2);
                strncat(s1, s2, MAX_SIZE - strlen(s1));
                break;
                
            case 5:
                printf("String S1 invertida: ");
                for (int i = strlen(s1) - 1; i >= 0; i--) {
                    printf("%c", s1[i]);
                }
                printf("\n");
                break;
                
            case 6:
                printf("Digite o caractere a ser contado: ");
                scanf(" %c", &c1);
                int count = 0;
                for (int i = 0; i < strlen(s1); i++) {
                    if (s1[i] == c1) {
                        count++;
                    }
                }
                printf("O caractere '%c' aparece %d vezes na string S1.\n", c1, count);
                break;
                
            case 7:
                printf("Digite o caractere C1 a ser substituido: ");
                scanf(" %c", &c1);
                printf("Digite o caractere C2 que ira substituir C1: ");
                scanf(" %c", &c2);
            for (int i = 0; i < strlen(str1); i++) {
                if (str1[i] == c1) {
                    str1[i] = c2;
                    break;
                }
            }
                printf("Nova string S1: %s\n", str1);
                break;
        }
    }
}