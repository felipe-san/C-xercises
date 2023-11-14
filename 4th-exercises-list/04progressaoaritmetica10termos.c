#include <stdio.h>

/*
4. Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.A
(Progressão Aritmética), armazenando esses valores em um vetor de tamanho 10.
*/

#include <stdio.h>

int main (){
	float num_inicial, razao, prog_artm[10]; 
	
	printf("Digite um numero qualquer: ");
	scanf("%f", &num_inicial);
	printf("\nAgora digite uma razao: ");
	scanf("%f", &razao);
	printf("\nCalculando a progressao aritmetica para 10 termos...\n");
	
	for (int i = 0; i < 10; i++){
		prog_artm[i] = num_inicial + (i * razao);
		printf("\n%d. %2.f", i + 1, prog_artm[i]);
	}
	
    printf("\n");

	return 0;
}



