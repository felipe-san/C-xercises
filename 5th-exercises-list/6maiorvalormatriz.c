#include <stdio.h>

/*
6. Leia uma matriz 4 x 4, imprima a matriz e retorne à localização (linha e a coluna) do maior valor
*/

int main (){
	float matriz[4][4], maior = -9999999;
	int i, j;
	
    printf("\nDigite numeros para preencher uma matriz 4x4: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d-%d. ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
            if (matriz[i][j] > maior) maior = matriz[i][j];              }
    }

    for(i = 0; i < 4; i++){
        printf("\n");
        for(j = 0; j < 4; j++){
            printf("|%5.1f", matriz[i][j]);        
        }
        printf("|");
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if (matriz[i][j] - maior == 0)
                printf("\n\nO maior valor eh %.1f,\nque esta localizado na linha %d\ne coluna %d", maior, i + 1, j + 1);
        }
    }
    printf("\n");
	return 0;
}


