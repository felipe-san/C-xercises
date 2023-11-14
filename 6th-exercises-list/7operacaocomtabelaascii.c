#include <stdio.h>
#include <string.h>

/*
7. Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII de cada
caractere da palavra. Imprima a string resultante.
*/

int main (){
    char string[50];
    int i;
    printf("\nDigite uma frase: ");
    fgets(string, 50, stdin);
       

    printf("\nPalavra com cada caractere somado +1 valor ASCII: ");
    for (i = 0; i < 50 && i < strlen(string); i++){
        string[i] = string[i] + 1;
        printf("%c", string[i]);
    }    
    
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    printf("\n");
    return 0;
}
