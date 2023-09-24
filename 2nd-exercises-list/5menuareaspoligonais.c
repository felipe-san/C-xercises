#include <stdio.h>

/* 5. Recebido um código numérico e valores apropriados a cada caso, calcule e imprima:

•Código Cálculo a ser efetuado      •Fórmulas:
1. área de um quadrado              1. área do quadrado: lado²
2. área de um retângulo             2. área do retângulo: base × altura
3. área de um trapézio              3. área do trapézio: ((base_maior + base_menor) / 2) * altura */

int main ()
{

	int resp;
    float base_ma, base_me, altura;
	char c;
    

    printf("Olá! Digite o valor da operação. \n1. Área de um quadrado. \n2. Área de um retângulo. \n3. Área de um trapézio \n");
	scanf("%d", &resp);
	putchar('\n');

	switch ( resp )
		{
			case 1:
			    printf("\nOperação 1 escolhida.\nDigite o valor da base: ");
			    scanf("%f", &base_ma);
			    printf("O valor da área do quadrado é %.3f. \n", base_ma * base_ma);
			    break;

			case 2:
			    printf("\nOperação 2 escolhida.\nDigite o valor da base: ");
	            scanf("%f", &base_ma);
			    printf("\nDigite o valor da altura: ");
			    scanf("%f", &altura);
	            printf("O valor da área do retângulo é %.3f. \n", base_ma * altura);
			    break;

			case 3:
			    printf("\nOperação 3 escolhida.\nDigite o valor da base maior: ");
                scanf("%f", &base_ma);
			    printf("\nDigite o valor da base menor: ");
			    scanf("%f", &base_me);
			    printf("\nDigite o valor da altura: ");
                scanf("%f", &altura);
                printf("O valor da área do trapézio é %.3f. \n", ((base_ma + base_me) / 2) * altura);
                break;

			default:
			printf("\nValor inválido.");
        }			
    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
