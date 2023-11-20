#include <stdio.h>

/*
3. Escreva uma função potencia(base, expoente) que, quando chamada, retorna base^expoente. Por exemplo,
potencia(3, 4) deve retornar 81. Verifique se expoente é um inteiro maior ou igual a 1.
*/

// Funcao potencia
float potencia(int base, int expoente){
    int i, result = base;
    
    if (expoente > 0){
        for (i = 1; i < expoente; i++)
            result *= base;
        printf("\nExpoente positivo maior que 1 detectado.\n");
        printf("%d elevado a %d eh %d", base, expoente, result);
    }
    else if (expoente == 0 && base > 0){
        result = 1;
        printf("%d elevado a %d eh %d", base, expoente, result);
    }
    else
        printf("Operacao Invalida.");
        result = 0;
    return result;
}

// Funcao principal
int main(){
    int bas, exp, i;

    printf("\nDigite um numero para a base: ");
    scanf("%d", &bas);
    printf("\nDigite agora um numero para o expoente: ");
    scanf("%d", &exp);

    potencia(bas, exp);

    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;
}
