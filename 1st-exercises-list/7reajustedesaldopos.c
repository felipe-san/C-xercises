#include <stdio.h>

// 7. Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando um
//    reajuste de 2% (positivo).

int main(){
    float saldo_inicial, reajuste, saldo_reajuste;

    printf("Digite um valor de um saldo de uma conta qualquer: ");
    scanf("%f", &saldo_inicial);

    reajuste = saldo_inicial * (2.0/100.0);
    saldo_reajuste = saldo_inicial + reajuste;
    printf("\nSaldo inicial: R$%.2f\nReajuste: R$%.2f\nSaldo com reajuste positivo: R$%.2f\n", saldo_inicial, reajuste, saldo_reajuste);
}

//
// Created by felipe-san on 14/09/23.
//


