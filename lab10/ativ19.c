#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maaxn 100
#define maaxs 200

typedef struct {
    char nome[maaxn];
    float nota;
} Aluno;

void obter_aluno_com_maior_nota(const char* arquivo);

int main() {
    char nome_arquivo[maaxn];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    obter_aluno_com_maior_nota(nome_arquivo);

    return 0;
}






void obter_aluno_com_maior_nota(const char* arquivo) {
    float maior_nota = 0;
    char aluno_maior_nota[maaxn];

    FILE* file = fopen(arquivo, "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    char linha[maaxs];
    while (fgets(linha, sizeof(linha), file) != NULL) {
        char *nome_pos = strstr(linha, "NOME: ");
        char *nota_pos = strstr(linha, "NOTA: ");
        if (nome_pos != NULL && nota_pos != NULL) {
            Aluno aluno;
            sscanf(nome_pos + 6, "%s", aluno.nome);
            sscanf(nota_pos + 6, "%f", &aluno.nota);

            if (aluno.nota > maior_nota) {
                maior_nota = aluno.nota;
                strcpy(aluno_maior_nota, aluno.nome);
            }
        }
    }

    fclose(file);

    printf("Aluno com a maior nota:\n");
    printf("Nome: %s\n", aluno_maior_nota);
    printf("Nota: %.2f\n", maior_nota);
}