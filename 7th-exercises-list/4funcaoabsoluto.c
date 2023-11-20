#include <stdio.h>

/*
4. Escreva um programa em C que leia 5 valores inteiros e imprima para cada um o seu correspondente valor
absoluto. Para obter o valor absoluto do número crie a função Absoluto.
*/

// Funcao Absoluto
int Absoluto(int num){
    if (num < 0) return -num;
    else return num;
}

// Funcao principal
int main(){
    int numeros[5], i;

    printf("\nDigite cinco valores inteiros.");
    

    for(i = 0; i < 5; i++){
        printf("\n%d. ", i + 1);
        scanf("%d", &numeros[i]);       
    } 

    for(i = 0; i < 5; i++)
        printf("\n%d. Modulo: %d", i + 1, Absoluto(numeros[i]));
        
    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;
}
