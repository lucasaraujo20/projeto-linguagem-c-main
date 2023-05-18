#include <stdio.h>
#include <string.h>

struct funcionario{

    char nome[100];
    int idade;
    char sexo;
    int cpf;
    int nascidia;
    int nascimes;
    int nasciano;
    int codigo;
    char cargo[30];
    float salario;
};

int main(){

    struct funcionario a;

    printf("Digite seu nome: ");
    fgets(a.nome,100,stdin);

    printf("Digite sua idade: ");
    scanf("%d", &a.idade);

    printf("Digite seu sexo (M/F): ");
    setbuf(stdin,NULL);
    scanf("%c", &a.sexo);

    printf("Digite seu cpf: ");
    scanf("%d", &a.cpf);

    printf("Digite a data de nascimento (00/00/00): ");
    scanf("%d/%d/%d", &a.nascidia,&a.nascimes, &a.nasciano);

    printf("Digite o codigo do setor onde trabalha: ");
    scanf("%d", &a.codigo);

    printf("Digite o cargo ocupado: ");
    setbuf(stdin,NULL);
    fgets(a.cargo,30,stdin);

    printf("Digite o salario: ");
    scanf("%f", &a.salario);


    printf("\n");

    printf("Nome: %s", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("sexo: %c\n", a.sexo);
    printf("Cpf: %d\n", a.cpf);
    printf("Data de nascimento: %d/%d/%d\n", a.nascidia, a.nascimes, a.nasciano);
    printf("Cpf: %d\n", a.codigo);
    printf("Cargo: %s", a.cargo);
    printf("Salario: %.2f", a.salario);

}