#include <stdio.h>
#include <string.h>

/*
8. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos
caracteres cujo código ASCII está entre 97 e 122.
*/

int main (){
    char string[50];
    int i;
    printf("\nDigite uma cadeia de caracteres: ");
    fgets(string, 50, stdin);
       

    printf("\nCadeia de caracteres em maiusculo: ");
    for (i = 0; i < 50 && i < strlen(string); i++){
        if (string[i] - 32 >= 65 && string[i] <= 122) string[i] = string[i] - 32;
        printf("%c", string[i]);
    }    
    
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    printf("\n");
    return 0;
}
