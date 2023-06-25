#include <stdio.h>

#define maaxs 50

typedef struct {
    char profissao[maaxs];
    int tempo_servico;
} Funcionario;

void escrever_arquivo(const char* nome_arquivo, Funcionario* funcionarios, int num_funcionarios) {
    FILE* arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    for (int i = 0; i < num_funcionarios; i++) {
        fprintf(arquivo, "%s %d\n", funcionarios[i].profissao, funcionarios[i].tempo_servico);
    }

    fclose(arquivo);

    printf("Dados dos funcionarios foram salvos no arquivo.\n");
}

void ler_arquivo(const char* nome_arquivo) {
    FILE* arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    Funcionario funcionarios[5];

    for (int i = 0; i < 5; i++) {
        if (fscanf(arquivo, "%s %d", funcionarios[i].profissao, &funcionarios[i].tempo_servico) != 2) {
            printf("Erro ao ler o arquivo.\n");
            fclose(arquivo);
            return;
        }
    }

    fclose(arquivo);

    printf("Dados dos funcionarios:\n");
    for (int i = 0; i < 5; i++) {
        printf("Funcionario %d\n", i + 1);
        printf("Profissao: %s\n", funcionarios[i].profissao);
        printf("Tempo de servico: %d anos\n", funcionarios[i].tempo_servico);
        printf("\n");
    }
}

int main() {
    Funcionario funcionarios[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a profissao do funcionario %d: ", i + 1);
        scanf("%s", funcionarios[i].profissao);

        printf("Digite o tempo de serviço (em anos) do funcionario %d: ", i + 1);
        scanf("%d", &funcionarios[i].tempo_servico);
    }

    escrever_arquivo("emp.txt", funcionarios, 5);
    ler_arquivo("emp.txt");

    return 0;
}
