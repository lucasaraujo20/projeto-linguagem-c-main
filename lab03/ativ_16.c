#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float num1, num2, result;

    do {
        printf("\n");
        printf("Menu de opcoes:\n");
        printf("1) adicao\n");
        printf("2) subtracao\n");
        printf("3) multiplicacao\n");
        printf("4) divisao\n");
        printf("5) Saida\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &num1, &num2);
        }

        switch(opcao) {
            case 1:
                result = num1 + num2;
                printf("resultado: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("resultado: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("resultado: %.2f\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Impossivel dividir por zero\n");
                } else {
                    result = num1 / num2;
                    printf("Resultado: %.2f\n", result);
                }
                break;
            case 5:
                printf("Encerrando programa\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 5);

    return 0;
}
