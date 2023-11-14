#include <stdio.h>

/*
3. Faça um programa que conte o número de 1’s que aparecem em um string. Exemplo: “0011001” -> 3
*/

int main (){
    char string1[25];
    int i, contagem = 0;
    printf("\nDigite qualquer coisa: ");
    scanf("%s", string1);
    
    for (i = 0; i < 25; i++)
        if (string1[i] == '1') contagem += 1;
    
    printf("\nQuantidade de 1 contidos na string: %d", contagem);
        
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    return 0;
}
