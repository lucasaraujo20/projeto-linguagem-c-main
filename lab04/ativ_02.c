#include <stdio.h>

int print (void);
int meses(int a);
int diames(int b);

int main(){

    print();

    return 0;
}




int diames(int b)
{
    if( b >= 1 && b <= 30 || b <=31 ){
        return b;
    }else{
        return 0;
    }
}

int meses(int a )
{
    switch(a){
        case 1:
        return printf("janeiro");
        case 2:
        return printf("fevereiro");
        case 3:
        return printf("marco");
        case 4:
        return printf("abril");
        case 5:
        return printf("maio");
        case 6:
        return printf("junho");
        case 7:
        return printf("julho");
        case 8:
        return printf("agosto");
        case 9:
        return printf("setembro");
        case 10:
        return printf("outubro");
        case 11:
        return printf("novembro");
        case 12:
        return printf("dezembro");
        default:
        return printf("nao existe");
    }
}

int print(void) 
{
    int mes, dia, ano, receb2;

    printf("Digite o dia: ");
    scanf("%d",&dia);
    printf("Digite o mes em numero: ");
    scanf("%d",&mes);
    printf("Digite o ano: ");
    scanf("%d",&ano);

    receb2 = diames(dia);

    printf(" %d de ",receb2,meses);
    meses(mes); 
    + printf(" de %d",ano);


}