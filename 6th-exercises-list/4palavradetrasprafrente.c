#include <stdio.h>

/*
4. Faça um programa que receba uma palavra e a imprima de trás para frente.
*/

int main (){
    char string[25];
    int i, flag = 0;
    printf("\nDigite qualquer palavra: ");
    scanf("%s", string);
    
    for (i = 0; i < 25; i++)
        if (string[i] == '\0'){
            flag = i;
            break;
        }

    printf("\nPalavra ao de tras pra frente: ");    
    for (i = flag; i > -1; i--)
        printf("%c", string[i]);

    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    printf("\n");
    return 0;
}
