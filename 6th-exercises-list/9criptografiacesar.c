#include <stdio.h>
#include <string.h>

/*
9. O código de César é uma das mais simples e conhecidas técnicas de criptografia. E um tipo de
substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo
dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituido por
‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de
César (3 posições), entre com uma string e retorne a string codificada. Exemplo:
• String:
a ligeira raposa marrom saltou sobre o cachorro cansado
• Nova string:
D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR.
*/

int main (){
    char string[56];
    int i;
    printf("\nDigite uma string: ");
    fgets(string, 56, stdin);
       
    printf("\nCadeia de caracteres criptografada com o metodo Cesar: ");
    for (i = 0; i < 56 && i < strlen(string); i++){
        if (string[i] - 32 >= 65 && string[i] <= 122) string[i] = string[i] - 32;

        if (string[i] != ' '){
            if (string[i] < 88) string[i] = (string[i] + 3);
            else string[i] = string[i] - 23;
        }
        printf("%c", string[i]);
    }    
    
    printf("\n\nFIM!\nPressione Ctrl + D para finalizar.");
    while ((i = getchar()) != EOF);
    printf("\n");
    return 0;
}
