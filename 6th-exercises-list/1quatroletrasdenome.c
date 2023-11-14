#include <stdio.h>

/*
1. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome (caso haja).
*/

int main (){
    char nome[25];
    int i;
    printf("\nDigite um nome qualquer: ");
    scanf("%s", nome);
    printf("4 primeiras letras, se houver: ");
    for (i = 0; i < 4 && nome[i] != '\0'; i++) printf("%c", nome[i]);
    
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    return 0;
}
