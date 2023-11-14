#include <stdio.h>

/*
7. Peça ao usuário que preencha um vetor de 20 números reais! Para esses números dizer quantos são pares e
quantos são ímpares!
*/

int main (){
    float nums[20];
    int i, numsint[20], contagem_pares = 0, contagem_impares = 0;
    
    printf("Digite 20 numeros reais.\n");
    for (i = 0; i < 20; i++){
        printf("%d. ", i + 1);
        scanf("%f", &nums[i]);
        numsint[i] = nums[i];
    }    

    for (i = 0; i < 20; i++){
        if (numsint[i] % 2 == 0) contagem_pares += 1;
        else if (numsint[i] % 2 != 0) contagem_impares += 1;
    }
    
    printf("\n\nQuantidade de PARES: %d\nQuantidade de IMPARES: %d\n", contagem_pares, contagem_impares);
}

