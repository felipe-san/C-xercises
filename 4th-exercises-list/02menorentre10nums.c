#include <stdio.h>

/*
2. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o menor, e
seu valor.
*/

int main (){
	float nums[10];
	float menor = 99999;
	int i, indice = -1;
	
	for (i = 0; i < 10; i++){
		printf("%d. Digite um numero: ", i + 1);
		scanf("%f", &nums[i]);
	}

	for (i = 0; i < 10; i++)
		if (nums[i] < menor){
			menor = nums[i];
			indice = i + 1;
		}
	printf("\nO elemento %d eh o menor e tem valor: %.2f\n", indice, menor);
	
	return 0;
}

