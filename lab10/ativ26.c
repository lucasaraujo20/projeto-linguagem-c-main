#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
} Aluno;

void cadastrarAluno(Aluno **alunos, int *numAlunos) {
    Aluno novoAluno;

    printf("Cadastrar Aluno\n");

    printf("Matricula: ");
    scanf("%d", &novoAluno.matricula);

    printf("Sobrenome: ");
    fgets(novoAluno.sobrenome, sizeof(novoAluno.sobrenome), stdin);


    printf("Ano de Nascimento: ");
    scanf("%d", &novoAluno.ano_nascimento);

    *numAlunos += 1;
    *alunos = realloc(*alunos, *numAlunos * sizeof(Aluno));
    (*alunos)[*numAlunos - 1] = novoAluno;

    printf("Aluno cadastrado com sucesso.\n");
}

void gravarArquivo(Aluno *alunos, int numAlunos) {
    FILE *arquivo;
    int i;

    arquivo = fopen("alunos.dat", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(&numAlunos, sizeof(int), 1, arquivo);
    fwrite(alunos, sizeof(Aluno), numAlunos, arquivo);

    fclose(arquivo);
    printf("Dados gravados no arquivo com sucesso.\n");
}

void lerArquivo(Aluno **alunos, int *numAlunos) {
    FILE *arquivo;
    int i;

    arquivo = fopen("alunos.dat", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fread(numAlunos, sizeof(int), 1, arquivo);
    *alunos = malloc(*numAlunos * sizeof(Aluno));
    fread(*alunos, sizeof(Aluno), *numAlunos, arquivo);

    fclose(arquivo);
    printf("Dados carregados do arquivo com sucesso.\n");
}

void mostrarAlunos(Aluno *alunos, int numAlunos) {
    int i;

    printf("Lista de Alunos\n");

    if (numAlunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    for (i = 0; i < numAlunos; i++) {
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
        printf("--------------------\n");
    }
}

void liberarMemoria(Aluno *alunos) {
    free(alunos);
}

int main() {
    Aluno *alunos = NULL;
    int numAlunos = 0;
    int opcao;

    printf("Gerenciador de Alunos\n");

    do {
        printf("1. Cadastrar Aluno\n");
        printf("2. Gravar Dados no Arquivo\n");
        printf("3. Carregar Dados do Arquivo\n");
        printf("4. Mostrar Alunos Cadastrados\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
            cadastrarAluno(&alunos, &numAlunos);
            break;
        case 2:
            gravarArquivo(alunos, numAlunos);
            break;
        case 3:
            lerArquivo(&alunos, &numAlunos);
            break;
        case 4:
            mostrarAlunos(alunos, numAlunos);
            break;
        case 0:
            printf("Encerrando o programa.\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    printf("\n");

} while (opcao != 0);

liberarMemoria(alunos);

return 0;


}