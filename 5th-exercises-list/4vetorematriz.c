#include <stdio.h>

/*
4. Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.
*/

int main (){
	float vetor[3], matriz[3][3], result[3];
	int i, j, k;
	
    printf("\nDigite valores para uma matriz de 3x3\n");
	for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d-%d. ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nDigite valores para um vetor de 3 indices\n");
	for (i = 0; i < 3; i++){
        printf("%d. ", i + 1);
        scanf("%f", &vetor[i]);
    }
    
    printf("\nVetor produto da multiplicacao entre a matriz e o vetor: ");
	for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++){
            result[i] = 0;
            for (k = 0; k < 3; k++){
                result[i] += matriz[i][k] * vetor[k]; 
            }
 
        }
        printf("|%5.2f", result[i]);        
        printf("|");
	}

    printf("\n");
	return 0;
}


