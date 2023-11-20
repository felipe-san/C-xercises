#include <stdio.h>

/*
8. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A função deve
retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.
*/

int Verifica(int num){
    if (num > 0) return 1;
    else if (num == 0) return 0;
    else return -1;
}

// Funcao principal
int main(){
    int numero, resp;
    
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);
    resp = Verifica(numero);

    if (resp == 1) printf("\nNumero positivo!");
    else if (resp == 0) printf("Numero 0!");
    else printf("\nNumero negativo!");
    
    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((numero = getchar()) != '\n' && numero != EOF);
    printf("\n");
    return 0;
}
