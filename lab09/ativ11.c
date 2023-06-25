#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int anoNascimento;
} Aluno;

int main() {
    int quantidadeAlunos;

    printf("Digite o numero de alunos a serem cadastrados: ");
    scanf("%d", &quantidadeAlunos);

    Aluno* alunos = (Aluno*)malloc(quantidadeAlunos * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria. Encerrando o programa\n");
        return 1;
    }

    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &(alunos[i].matricula));

        printf("Sobrenome: ");
        scanf("%s", alunos[i].sobrenome);

        printf("Ano de Nascimento: ");
        scanf("%d", &(alunos[i].anoNascimento));
    }

    printf("\nDados dos alunos cadastrados:\n");
    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].anoNascimento);
        printf("\n");
    }

    free(alunos);

    return 0;
}
