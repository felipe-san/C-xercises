#include <stdio.h>

/*
7. Faça uma função que recebe um valor inteiro e verifica se o valor é par. A função deve retornar 1 se o número for
par e 0 se for ímpar.
*/

int ParOuImpar(int num){
    if (num % 2 == 0) return 1;
    else return 0;
}

// Funcao principal
int main(){
    int numero;
    
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);
    if (ParOuImpar(numero) == 1) printf("\nNumero par!");
    else printf("\nNumero impar!");
    
    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((numero = getchar()) != '\n' && numero != EOF);
    printf("\n");
    return 0;
}
