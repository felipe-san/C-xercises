#include <stdio.h>

// 6. Faça um programa em C que leia um número real e imprima ¼ deste número.

int main(){
    float num1, result;

    printf("Digite um numero qualquer: ");
    scanf("%f", &num1);

    result = num1 / 4;
    printf("\n1/4 de %.1f é: %.1f.\n", num1, result);
}

//
// Created by felipe-san on 14/09/23.
//


