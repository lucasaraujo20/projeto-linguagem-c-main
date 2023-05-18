#include <stdio.h>
#include <math.h> 

struct complexo{
    float real;
    float imaginario;
};

int main(){
   
    struct complexo z;
    printf("Digite a parte real do numero complexo Z:");
    scanf("%f",&z.real);
    printf("Digite a parte imaginaria do numero complexo Z:");
    scanf("%f",&z.imaginario);
    struct complexo w;
    printf("Digite a parte real do numero complexo W:");
    scanf("%f",&w.real);
    printf("Digite a parte imaginaria do numero complexo W:");
    scanf("%f",&w.imaginario);
    
    struct complexo operacao[3];
   
    operacao[0].real = z.real+w.real;
    operacao[0].imaginario = z.imaginario+w.imaginario;
  
    operacao[1].real = z.real-w.real;
    operacao[1].imaginario = z.imaginario-w.imaginario;
   
    operacao[2].real = (z.real*w.real) - (z.imaginario*w.imaginario);
    operacao[2].imaginario = (z.imaginario*w.real) + (w.imaginario*z.real);
   
    float moduloz = sqrt((z.real*z.real)+(z.imaginario*z.imaginario));
    float modulow = sqrt((w.real*w.real)+(w.imaginario*w.imaginario));

    printf("Soma: %.2f + %.2fi\n",operacao[0].real,operacao[0].imaginario);
    printf("Subtracao: %.2f + %.2fi\n",operacao[1].real,operacao[1].imaginario);
    printf("Produto: %.2f + %.2fi\n",operacao[2].real,operacao[2].imaginario);
    printf("Modulo: Z=%.2f e W=%.2f\n",moduloz,modulow);

    return 0;
}