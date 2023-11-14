#include <stdio.h>

/*
2. Leia uma matriz 3x2 e outra 2x3 de números reais. Imprima o produto destas duas matrizes.
*/

int main (){
	float matriz1[3][2], matriz2[2][3], result[3][3];
	int i, j, k;
	
    printf("\nDigite valores para a primeira matriz de 3x2\n");
	for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
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
    
    printf("\nMatriz produto das duas matrizes: ");
	for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++){
            result[i][j] = 0;
            for (k = 0; k < 2; k++){
                result[i][j] += matriz1[i][k] * matriz2[k][j]; 
            }
            printf("|%5.2f", result[i][j]);
        }
        
        printf("|");
	}

    printf("\n");
	return 0;
}


