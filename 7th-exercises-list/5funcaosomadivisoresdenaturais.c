#include <stdio.h>

/*
5. Escreva um programa que leia 5 números inteiros positivos (utilize uma função que leia esse número e verifique
se ele é positivo). Para cada número informado escrever a soma de seus divisores (exceto ele mesmo). Crie a
função SomaDivisores para obter a soma.
*/

int SomaDivisores(int base){
    int i, soma = 0;
    for(i = 1; i < base; i++)
        if (base % i == 0) soma += i;
    return soma; 
}

int VerificaPositivo(int num, int iter){
    do{
        printf("%d. ", iter + 1);
        scanf("%d", &num);
    } while (num < 0);
    return num;
}

// Funcao principal
int main(){
    int numeros[5], i;

    printf("\nDigite cinco valores inteiros.\n");
    for(i = 0; i < 5; i++){
        numeros[i] = VerificaPositivo(numeros[i], i);       
    } 

    for(i = 0; i < 5; i++){
        printf("\nSoma dos divisores de %5d: %d", numeros[i], SomaDivisores(numeros[i]));       
    } 
   
    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;
}
