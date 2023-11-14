#include <stdio.h>

/*
3. Crie um programa em C que peça 10 números, armazene eles em um vetor e diga qual elemento é o maior, qual
é o menor e que seus valores.
*/

#include <stdio.h>

int main (){
	float nums[10];
	float maior = -99999, menor = 99999;
	int i, indicemaior = -1, indicemenor = -1;
	
	for (i = 0; i < 10; i++){
		printf("%d. Digite um numero: ", i + 1);
		scanf("%f", &nums[i]);
	}
	for (i = 0; i < 10; i++){
		if (nums[i] > maior){
			maior = nums[i];
			indicemaior = i + 1;
		}

		if (nums[i] < menor){
			menor = nums[i];
			indicemenor = i + 1;
		}
	}

	printf("\nO elemento %d eh o menor e tem valor: %.2f", indicemenor, menor);
	printf("\nO elemento %d eh o maior e tem valor: %.2f\n", indicemaior, maior);
	
	return 0;
}


