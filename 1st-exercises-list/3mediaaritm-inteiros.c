#include <stdio.h>

// 3. Faça um um programa em C que receba três números inteiros e mostre a média aritmética deles.

int main(){
    int num1, num2, num3, soma;
    float media;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);
    
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num3);
        
    soma = num1 + num2 + num3;
    media = soma / 3;
    printf("Media aritmética de %d, %d e %d: %1.1f.\n", num1, num2, num3, media);
}

//
// Created by felipe-san on 14/09/23.
//
