#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maaxn 100
#define maaxp 20

int main() {
    char fileName[100];
    char name[maaxn];
    char phone[maaxp];

    printf("Digite o nome do arquivo: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';


    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    while (1) {
        printf("Digite o nome: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

 
        if (strcmp(name, "0") == 0) {
            break;
        }

        printf("Digite o telefone: ");
        fgets(phone, sizeof(phone), stdin);
        phone[strcspn(phone, "\n")] = '\0';


        fprintf(file, "%s %s\n", name, phone);
    }


    fclose(file);

    printf("Arquivo criado com sucesso: %s\n", fileName);

    return 0;
}
