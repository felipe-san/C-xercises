#include <stdio.h>
#include <string.h>

/*
2. Crie um programa que compara duas strings (não use a função strcmp).
*/

int main (){
    char string1[25], string2[25];
    int i, flag = 0;
    printf("\nDigite qualquer coisa: ");
    fgets(string1, 25, stdin);
    printf("\nDigite qualquer coisa novamente: ");
    fgets(string2, 25, stdin);
    
    for (i = 0; i < strlen(string1); i++)
        if (string1[i] != string2[i]) flag = 1;
    
    if (flag == 0) printf("\nAs strings sao iguais.");
    else printf("\nAs strings sao diferentes."); 
    
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    return 0;
}
