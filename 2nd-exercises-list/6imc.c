#include <stdio.h>

/* 6. Dada a altura e peso de uma pessoa, calcular seu índice de massa corporal. Fórmula: peso dividido por altura ao
      quadrado. Faixas:
      • <= 18,5 - abaixo do peso normal;
      • 18,5 e <= 25 - peso normal;
      • 25 e <= 30 - peso acima do normal;
      • acima de 30 - peso excessivo. */

int main ()
{

    float peso, altura, imc;
	char c;
    

    
	printf("Olá, digite seu peso: ");
	scanf("%f", &peso);
	printf("Agora digite a sua altura: ");
	scanf("%f", &altura);
 
	imc = peso / (altura*altura);
    printf("IMC: %.2f\n", imc);
	if (imc < 18.5)
		printf("Você com o peso abaixo do normal.\n");
	else if (imc <= 25)
		printf("Você está com o peso normal.\n");
	else if (imc > 25 && imc <= 30)
		printf("Você está com o peso acima do normal.\n");
	else if (imc > 30)
		printf("Você está com o peso excessivamente acima do normal.\n");

    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
