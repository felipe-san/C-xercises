#include <stdio.h>

// 10. Fazer um programa para:
//     a. receber do usuário um tempo em segundos, correspondente à duração de um evento qualquer (por ex. jogo de
//        futebol).
//     b. calcular e mostrar ao usuário o tempo equivalente em horas e minutos.

int main(){
    int segundos, horas, minutos, segundos_notacao_horaria, minutos_notacao_horaria, horas_notacao_horaria;

    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &segundos);
    
    minutos = segundos / 60.0;
    horas = segundos / 60.0 / 60.0;
    segundos_notacao_horaria = segundos % 60;
    minutos_notacao_horaria = minutos % 60;
    horas_notacao_horaria = horas % 60;

    printf("\n-------Notacao Horaria-------\n\n%dh%dm%ds\n\n-------Notacao Horaria-------\n", horas_notacao_horaria, minutos_notacao_horaria, segundos_notacao_horaria);
    printf("\n\n\n-------Notacao Decimal-------\n\n%ds em horas: %dh\n%ds em minutos:%d\n\n-------Notacao Decimal-------\n\n", segundos, horas, segundos, minutos);

}

//
// Created by felipe-san on 14/09/23.
//


