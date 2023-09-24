#include <stdio.h>

/* 3. Anos bissextos ocorrem de quatro em quatro anos. Todos os anos que sejam múltiplos de 4 mas que não sejam
      múltiplos de 100, com exceção daqueles que são múltiplos de 400, são bissextos. Por exemplo, o ano 1900 não
      foi bissexto, mas o ano 2000 foi. Faça um programa que leia um ano e devolva se ele foi/é/será bissexto ou não. */

int main ()
{
    int entrada_ano, ano_atual, result, i;
    char c;    
    
    ano_atual = 2023;
    printf("Ola! \nDigite um ano, e verificarei se ele eh, foi ou sera bissexto ou nao. ");
    scanf("%d", &entrada_ano);
    result = (ano_atual - entrada_ano);
    if (result == 0){
        if (entrada_ano % 4 == 0 && entrada_ano % 100 != 0 || entrada_ano % 400 == 0){
            printf("O ano eh bissexto.");
        }  
        else
            printf("O ano NAO eh bissexto");
    }
    else if (result > 0){
        if (entrada_ano % 4 == 0 && entrada_ano % 100 != 0 || entrada_ano % 400 == 0){
            printf("O ano foi bissexto.");
        }  
        else
            printf("O ano NAO foi bissexto");
    }
    else
        if (entrada_ano % 4 == 0 && entrada_ano % 100 != 0 || entrada_ano % 400 == 0){
            printf("O ano sera bissexto.");
        }  
        else
            printf("O ano NAO sera bissexto");
            
        
    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
    return 0;
}
