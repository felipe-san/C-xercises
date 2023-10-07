#include <stdio.h>

/* 3. Faça um programa em C que calcula o produto dos números digitados pelo usuário. O programa em C deve
permitir que o usuário digite uma quantidade não determinada de números. O programa em C encerra quando o
usuário digita o valor zero */

int main ()
{
	float entrada_valores, result = 1;
    char c;
	
	while (1)
    {
        printf("Digite um valor, ou 0 para terminar: "); 
        scanf("%f", &entrada_valores);

        if (entrada_valores > 0)
        {
            result = result * entrada_valores;
        }
        else if (entrada_valores == 0)
        {
            break;
        }

	}

    printf("\nProduto entre os números: %.2f", result);

    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
