#include <stdio.h>

// 2. Faça um programa em C que receba dois números inteiros e ao final imprima a soma deles.

int main(){
    int num1, num2, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    printf("Soma de %d e %d: %d.\n", num1, num2, soma);
}

//
// Created by felipe-san on 14/09/23.
//
