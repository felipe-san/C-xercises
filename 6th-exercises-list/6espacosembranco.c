#include <stdio.h>
#include <string.h>

/*
6. Ler uma frase e contar quantos caracteres são espaços em brancos. Lembre-se que uma frase e um
conjunto de caracteres (vetor) e retorne esse mesmo vetor sem nenhum dos espaços!
*/

int main (){
    char string[50];
    int i, embranco = 0;
    printf("\nDigite uma frase: ");
    fgets(string, 50, stdin);
       
    for (i = 0; i < 50 && i < strlen(string); i++){
        if (string[i] == ' ') embranco += 1;
    }

    printf("\nQuantidade de espacos em branco: %d", embranco);
    printf("\nFrase sem espacos: ");
    for (i = 0; i < 50 && i < strlen(string); i++){
        if (string[i] != ' ' && string[i] != '\0') printf("%c", string[i]);
    }    
    
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    printf("\n");
    return 0;
}
