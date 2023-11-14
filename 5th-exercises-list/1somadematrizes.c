#include <stdio.h>

/*
1. Leia duas matrizes 2x3 de números reais. Imprima a soma destas duas matrizes.
*/

int main (){
	float matriz1[2][3], matriz2[2][3], result[2][3];
	int i, j;
	
    printf("\nDigite valores para a primeira matriz de 2x3\n");
	for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d-%d. ", i + 1, j + 1);
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("\nDigite valores para a segunda matriz de 2x3\n");
	for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d-%d. ", i + 1, j + 1);
            scanf("%f", &matriz2[i][j]);
        }
    }    
    
    printf("\nMatriz soma das duas matrizes: ");
	for (i = 0; i < 2; i++){
        printf("\n");
        for (j = 0; j < 3; j++){
            result[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("|%5.2f", result[i][j]);
        }
        printf("|");
	}

    printf("\n");
	return 0;
}


