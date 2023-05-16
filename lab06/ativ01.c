#include <stdio.h>


typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;


typedef struct {
    int dia;
    int mes;
    int ano;
} Data;


typedef struct {
    Data data;
    Horario horario;
    char descricao[100]; 
} Compromisso;

int main() {
    Compromisso compromisso;

    
    compromisso.data.dia = 16;
    compromisso.data.mes = 5;
    compromisso.data.ano = 2023;

    compromisso.horario.hora = 10;
    compromisso.horario.minutos = 30;
    compromisso.horario.segundos = 0;

    snprintf(compromisso.descricao, sizeof(compromisso.descricao), "Reunião de equipe");

   
    printf("Data: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horário: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
    printf("Descrição: %s\n", compromisso.descricao);

    return 0;
}
