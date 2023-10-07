#include <stdio.h>

/* Faça um programa que leia um número inteiro de n dígitos e calcule o dígito verificador correspondente.
OBS: Dígito verificador ou algarismo de controle é um mecanismo de autenticação utilizado para verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes ou erros de transmissão ou digitação. Consiste em um ou mais algarismos acrescentados ao valor original e calculados a partir deste através de um determinado algoritmo. O digito verificador deve ser a soma de todos os números digitados até que se obtenha um valor menor que 10!
Ex: Número: 1588
Após é feito o somatório dos dígitos (1 + 5 + 8 + 8) o resultado é 22, deve-se então soma-los: 2 + 2 = 4.
Resultando em um dígito verificador 4
R.: 1588-4 */

int main ()
{
    int soma = 0, entrada = 0, nc = -1, digito_verif = 0, i;
    char c;
    
    printf("Digite um numero de qualquer tamanho. Quando estiver pronto, aperte Ctrl + D para adicionar o digito verificador. \n\n\n");
	while (entrada != '\n' && entrada != EOF)
    {
        if (entrada != '\n')
        {
            soma += entrada;
            entrada = getchar();
            nc++;
        }
    }
    
    entrada = soma;
    soma -= nc * 48;

    if (soma > 10)
    {
        for (i = 1; i <= soma; i *= 10)
        {
            digito_verif += (((soma / i) % (i * 10)) % 10);
        }
        if (digito_verif > 9)
        {
            digito_verif /= 2;
        }
    }
    else
        digito_verif = soma;
    
    printf("\e[A");
    printf("\e[Z-%d", digito_verif);
    printf("\b\nENTER para sair.");
    c = getchar();
    
    return 0;

}
