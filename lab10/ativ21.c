#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[40];
    int nota;
} DadosAluno;

void salvar_dados_alunos(DadosAluno* alunos, int num_alunos);

void mostrar_aluno_maior_nota();

int main() {
    int num_alunos;

    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos);

    DadosAluno* alunos = (DadosAluno*)malloc(num_alunos * sizeof(DadosAluno));
    if (alunos == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < num_alunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].nota);
    }

    salvar_dados_alunos(alunos, num_alunos);
    mostrar_aluno_maior_nota();

    free(alunos);

    return 0;
}




void salvar_dados_alunos(DadosAluno* alunos, int num_alunos) {
    FILE* file = fopen("alunos.dat", "wb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(alunos, sizeof(DadosAluno), num_alunos, file);
    fclose(file);

    printf("Dados dos alunos salvos com sucesso.\n");
}

void mostrar_aluno_maior_nota() {
    FILE* file = fopen("alunos.dat", "rb");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    DadosAluno aluno_maior_nota;
    int maior_nota = 0;

    DadosAluno aluno;
    while (fread(&aluno, sizeof(DadosAluno), 1, file) == 1) {
        if (aluno.nota > maior_nota) {
            maior_nota = aluno.nota;
            aluno_maior_nota = aluno;
        }
    }

    fclose(file);

    printf("Aluno com a maior nota:\n");
    printf("Nome: %s\n", aluno_maior_nota.nome);
    printf("Nota: %d\n", aluno_maior_nota.nota);
}
