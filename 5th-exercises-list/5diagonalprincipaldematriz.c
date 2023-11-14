#include <stdio.h>

/*
5. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida
*/

int main (){
	float matriz[5][5];
	int i, j;
	
    printf("Criando uma matriz com zeros em todos as coordenadas menos as da diagonal principal, que receberao ums.");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (i != j) matriz[i][j] = 0;
            else matriz[i][j] = 1;         
        }
    }

    for(i = 0; i < 5; i++){
        printf("\n");
        for(j = 0; j < 5; j++){
        printf("|%.0f", matriz[i][j]);        
        }
        printf("|");
    }

    printf("\n");
	return 0;
}


