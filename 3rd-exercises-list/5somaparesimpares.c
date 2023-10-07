#include <stdio.h>

/* 5. Faça um programa que leia vários inteiros positivos e mostre, no final, a soma dos números pares e a soma dos
números ímpares. O programa para quando entrar um número maior que 1000. */

int main ()
{
	int numero = 0, resultpares = 0, resultimpares = 0;
    char c;

	printf("Eu vou somar valores pares ou impares. Digite um numero maior que 1000 para terminar a execucao. \n\n");
    while (numero <= 1000)
    {
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {        
            resultpares += numero;
        }
        else if (numero % 2 == 1)
        {
            resultimpares += numero;
        }
    }
    
    printf("\nSoma impares: %d\nSoma pares: %d", resultimpares, resultpares);    
    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
