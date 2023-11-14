#include <stdio.h>

/*
5. Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os termos de uma P.G
(Progressão Geométrica), armazenando esses valores em um vetor de tamanho 10.
*/

int power(int n, float res){
    float result = 1;
	if (n > 0){
		for (int i = 1; i <= n; i++){
			result *= res;
		}
    }
	else
		result = 1;
	
	return result;
}

int main (){
	float num_inicial, razao, prog_artm[10]; 
	
	printf("Digite um numero qualquer: ");
	scanf("%f", &num_inicial);
	printf("\nAgora digite uma razao: ");
	scanf("%f", &razao);
	printf("\nCalculando a progressao geometrica para 10 termos...\n");
	
	for (int i = 0; i < 10; i++){
		prog_artm[i] = num_inicial * power(i, razao);
		printf("\n%d. %2.f", i + 1, prog_artm[i]);
	}
	
    printf("\n");
	return 0;
}

