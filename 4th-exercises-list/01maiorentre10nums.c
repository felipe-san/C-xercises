#include <stdio.h>

/*
1. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, e
seu valor.
*/

#include <stdio.h>

int main (){
	float nums[10];
	float maior = -99999;
	int i, indice = -1;
	
	for (i = 0; i < 10; i++){
		printf("%d. Digite um numero: ", i + 1);
		scanf("%f", &nums[i]);
	}
	for (i = 0; i < 10; i++)
		if (nums[i] > maior){
			maior = nums[i];
			indice = i + 1;
		}
	printf("\nO elemento %d eh o maior e tem valor: %.2f", indice, maior);
	
	return 0;
}


