#include <stdio.h>
#include <string.h>

/*
10. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. Lembrando que um
palíndromo e uma palavra que tenha a propriedade de poder ser lida tanto da direita para a esquerda
como da esquerda para a direita. Exemplo:
• ovo
• arara
• Socorram me, subi no onibus em Marrocos.
• Anotaram a data da maratona
*/

int main (){
    char string[43], stringtrat[43];
    int i, j, leng, flag = 0;

    //Recebendo uma string do usuario
    printf("\nDigite uma string: ");
    fgets(string, 43, stdin);
    
    //Preenchendo nova string com a string recebida, porem desconsiderando espacos, virgulas e possiveis newlines
    for (i = 0, j = 0; i < strlen(string); i++, j++){
        if (string[j] == '\n' | string[j] == ' ' | string[j] == ',') //Excecoes
        {
            i--;
        }
        else stringtrat[i] = string[j];
    }    
    
    //Checando tamanho da nova string
    leng = strlen(stringtrat);

    //Tratando nova string ao transformar todos os caracteres em maiusculos
    for (i = 0; i < leng; i++)
        if (stringtrat[i] - 32 >= 65 && stringtrat[i] <= 122) stringtrat[i] = stringtrat[i] - 32;    

    //Percorrendo a string para ver se eh mesmo palindromica
    for (i = 0; i < leng; i++)
        if (stringtrat[i] != stringtrat[leng - 1 - i]) flag = 1;

    //Estrutura de decisao que dara a resposta com base no checado anteriormente
    printf("\nA string ");
    if (flag == 0) printf("eh um palindromo.");
    else printf("nao eh um palindromo.");


    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;
}
