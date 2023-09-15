#include <stdio.h>

// 8. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o valor
//    em centígrados e calcule com base na fórmula a seguir. Após calcular o programa deve imprimir o resultado da 
//    conversão.
//    Fórmula: F = (9×C +160) / 5
//      • Em que:
//          o F = Graus em Fahrenheit
//          o C = Graus centígrados

int main(){
    float graus_cels, graus_fahr;

    printf("Digite um valor em graus Celsius: ");
    scanf("%f", &graus_cels);

    graus_fahr = (9.00 * graus_cels + 160.00) / 5.00;
    printf("\n%.1fC em Fahrenheit: %.1fF\n", graus_cels, graus_fahr);
}

//
// Created by felipe-san on 14/09/23.
//


