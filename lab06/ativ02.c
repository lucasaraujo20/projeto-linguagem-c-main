#include <stdio.h>
#include <string.h>

struct Dados{
    char nome[100];
    int idade;
    char endereco[100];
    

};


int main(){

    struct Dados p;

    printf("Digite o nome: ");
    setbuf(stdin,NULL);
    fgets(p.nome,100,stdin);


    printf("Digite a idade: ");
    setbuf(stdin,NULL);
    scanf("%d", &p.idade);

    printf("Digite o endereco: ");
    setbuf(stdin,NULL);
    fgets(p.endereco,100,stdin);

    printf("\n");

    printf("Nome: %s", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s\n", p.endereco);

    return 0;
}