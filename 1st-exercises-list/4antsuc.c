#include <stdio.h>

// 4. Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.

int main(){
    int num1, antes, depois;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    antes = --num1;
    depois = ++num1 + 1;     
    
    printf("\nAntecessor: %d;\nSucessor: %d.\n", antes, depois);
}

//
// Created by felipe-san on 14/09/23.
//
