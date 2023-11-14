#include <stdio.h>

/*
2. Crie um programa que compara duas strings (não use a função strcmp).
*/

int main (){
    char string1[25], string2[25];
    int i, flag = 0;
    printf("\nDigite qualquer coisa: ");
    scanf("%s", string1);
    printf("\nDigite qualquer coisa novamente: ");
    scanf("%s", string2);
    
    for (i = 0; i < 25; i++)
        if (string1[i] != string2[i]) flag = 1;
    
    if (flag == 0) printf("\nAs strings sao iguais.");
    else printf("\nAs strings sao diferentes."); 
    
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    return 0;
}
