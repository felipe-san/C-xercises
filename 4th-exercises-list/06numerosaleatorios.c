#include <stdio.h>
#include <stdlib.h>

/*
6. Escreve um programa que sorteio, aleatoriamente (use o exemplo da lista 3), 10 números inteiros menores que
20 e armazene estes em um vetor. Em seguida, o usuário digita um número entre 0 e 20 e seu programa em C
deve acusar se o número digitado está no vetor ou não. Se estiver, diga a posição que está.
*/

int main (){
    float rand_nums[10], num = -1;
    int i, presente = 0;
    
    printf("\nGerando conjunto de 10 numeros aleatorios.\n");
    
    for (i = 0; i < 10; i++){
        rand_nums[i] = rand() % 20;
    }
    while (num > 20 | num < 0){
        printf("\nDigite um numero entre 0 e 20: ");
        scanf("%f", &num);
    }
    
    for (i = 0; i < 10; i++){
        if (rand_nums[i] == num){
            printf("\nO numero %.2f esta na posicao %d\n", num, i + 1);
            presente = 1;            
        }
    }

    if (presente == 0)
        printf("\nNumero nao presente no conjunto de numeros aleatorios.\n");

}

