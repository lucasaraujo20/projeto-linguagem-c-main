#include <stdio.h>

int main() {
    
    FILE *arq;
    char inputChar;
    
    arq = fopen("arq.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("Insira caracteres (digite '0' para sair):\n");
    while (1) {
        scanf(" %c", &inputChar);
        
        if (inputChar == '0')
            break;
        
        putc(inputChar, arq);
    }
    fclose(arq);
    
    arq = fopen("arq.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    printf("Conteúdo do arquivo:\n");
    while ((inputChar = getc(arq)) != EOF) {
        printf("%c", inputChar);
    }
    fclose(arq);
    
    return 0;
}
