#include <stdio.h>

// 5. Faça um programa em C que leia dois números inteiros e imprima a soma, a subtração a multiplicação e a
//    divisão entre deles.

int main(){
    int num1, num2;
    float result;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);
    
    // resultado da soma    
    result = num1 + num2;
    printf("\nSoma: %.1f;", result);

    // resultado da subtração
    result = num1 - num2;
    printf("\nSubtracao: %.1f;", result);
    
    // resultado da multiplicacao
    result = num1 * num2;
    printf("\nMultiplicacao: %.1f;", result);

    // resultado da divisao
    result = num1 / (num2 * 1.0);
    printf("\nDivisao: %.1f.\n", result);
}

//
// Created by felipe-san on 14/09/23.
//


