#include <stdio.h>

/* 7. Criar um algoritmo para ler dois valores para as variáveis A e B, efetuar a troca dos valores de forma que a
variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A. Apresentar os
valores das variáveis trocadas: */

int main ()
{

    int a, b, aux;
	char c;
    

    
	printf("Olá, digite o valor de A: ");
	scanf("%d", &a);
	printf("Agora digite o valor de B: ");
	scanf("%d", &b);
 
    aux = a;
    a = b;
    b = aux;

    printf("\nValores trocados!\nA: %d\nB: %d", a, b);

    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
