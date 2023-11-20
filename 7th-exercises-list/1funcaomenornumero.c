#include <stdio.h>

/*
1. Escreva uma função que receba dois números inteiros retorne o menor número1
*/

int verifica_menor(int num1, int num2){
    if (num1 < num2)
        return num1;
    else
        return num2;
}

int main(){
    int numero1, numero2, menor, i;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero1);
    printf("\nDigite outro numero inteiro: ");
    scanf("%d", &numero2);

    menor = verifica_menor(numero1, numero2);
    printf("\nO menor numero eh %d", menor);

    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;
}
