#include <stdio.h>

/* 4. Faça um programa que lê dois valores, o primeiro servindo de indicador de operação e o segundo correspondendo ao
      raio de uma circunferência. Caso o primeiro valor lido seja igual a 1, calcular e imprimir a área desta
      circunferência. Se o valor lido for 2, calcular e imprimir o perímetro da circunferência. E se o valor lido for
      diferente destes dois valores, imprimir uma mensagem dizendo que o indicador de operação foi mal fornecido. */

int main ()
{

	int resp;
	float raio = 0;
    const float pi = 3.1415;
    char c;

	printf("Olá! Digite o valor da operação. \n1. Área da circunferência. \n2. Perímetro da circunferência.\n");
	scanf("%d", &resp);
	putchar('\n');

	switch ( resp )
	{

		case 1:
    		printf("\nOperação 1 escolhida.\nDigite o valor do raio. ");
    		scanf("%f", &raio);
    		printf("O valor da área da circunferência é %.3f. \n", raio * raio * pi);
    		break;

		case 2:
		    printf("\nOperação 2 escolhida.\nDigite o valor do raio. ");
            scanf("%f", &raio);
            printf("O valor do perímetro da circunferência é %.3f. \n", 2 * raio * pi);
		    break;

		default:
			printf("\nValor inválido.\n");
		
	}

    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
