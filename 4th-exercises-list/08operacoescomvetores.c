#include <stdio.h>

/*
8. Peça ao usuário que preencha um vetor de 50 números inteiros quaisquer! Imprimir
a. Só os índices pares
b. Só os índices ímpares
c. Todo o vetor de trás para frente
*/

int main (){
    int i, nums[50];
    
    printf("Digite 50 numeros inteiros.\n");
    for (i = 0; i < 50; i++){
        printf("%d. ", i + 1);
        scanf("%d", &nums[i]);
    }    

    printf("\n\nA. IMPRIMINDO PARES\n");
    for (i = 0; i < 50; i++)
        if (nums[i] % 2 == 0) printf("%d. %d\n", i + 1, nums[i]);
    
    printf("\n\nB. IMPRIMINDO IMPARES\n");
    for (i = 0; i < 50; i++)
        if (nums[i] % 2 != 0) printf("%d. %d\n", i + 1, nums[i]);

    printf("\n\nC. IMPRIMINDO VETOR INVERTIDO\n");
    for (i = 49; i > -1; i--)
        printf("%d. %d\n", i + 1, nums[i]);
}

