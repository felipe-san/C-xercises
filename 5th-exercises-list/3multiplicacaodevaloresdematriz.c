#include <stdio.h>

/*
3. Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for, multiplica cada elemento por 5 e imprime o resultado
*/

int main (){
	float matriz[3][3];
	int i, j;
	
    printf("\nDigite valores para uma matriz de 3x3\n");
	for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d-%d. ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz com seus valores multiplicados por 5: ");
	for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 3; j++){
            matriz[i][j] *= 5;
            printf("| %5.2f ", matriz[i][j]);
        }
        
        printf("|");
	}

    printf("\n");
	return 0;
}


