#include <stdio.h>

/*
5. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa palavra.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse
caractere.
*/

int main (){
    char string[25], caractere;
    int i, vogais = 0;
    printf("\nDigite qualquer palavra: ");
    scanf("%s", string);
       
    for (i = 0; i < 25 && string[i] != '\0'; i++)
        if (string[i] == 'a' | string[i] == 'e' | string[i] == 'i' | string[i] == 'o' | string[i] == 'u') vogais += 1;

    printf("\nQuantidade de vogais: %d", vogais);
    printf("\n\nDigite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);

    for (i = 0; i < 25; i++)
        if (string[i] == 'a' | string[i] == 'e' | string[i] == 'i' | string[i] == 'o' | string[i] == 'u') string[i] = caractere;

    printf("Palavra com caracteres substituidos por %c: %s", caractere, string);

    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    printf("\n");
    return 0;
}
