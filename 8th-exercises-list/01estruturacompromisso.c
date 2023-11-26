/*
1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
 Horário: composto de hora, minutos e segundos.
 Data: composto de dia, mês e ano.
 Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

#include <stdio.h>
#include <string.h>

struct Horario
{
    int hora, minutos, segundos;
};

struct Data
{
    int dia, mes, ano;
};

struct Compromisso
{
    struct Horario Hr;
    struct Data Dt;
    char descricao[50];
};

// Teste dos tipos de dados
int main(){
    struct Compromisso comp;
    int numero;

    comp.Dt.dia = 25;
    comp.Dt.mes = 11;
    comp.Dt.ano = 2023;

    comp.Hr.hora = 01;
    comp.Hr.minutos = 50;
    comp.Hr.segundos = 20;
    
    strcpy(comp.descricao, "Fazer os exercicios do professor Fuschillo.");

    printf("Data do compromisso: %d/%d/%d\nHora do compromisso: %d:%d:%d\nDescricao: %s\n\n", comp.Dt.dia, comp.Dt.mes, comp.Dt.ano, comp.Hr.hora, comp.Hr.minutos, comp.Hr.segundos, comp.descricao);

    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((numero = getchar()) != '\n' && numero != EOF);
    printf("\n");
    return 0;
}
