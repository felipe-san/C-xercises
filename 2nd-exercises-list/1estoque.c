#include <stdio.h>

/* 1. Escreva um programa que informe se existe estoque para atender um pedido feito a uma fábrica. O programa
      deverá receber como entradas o número de itens em estoque e o número de itens a serem fornecidos, e dará
      como saída o estoque atualizado ou uma mensagem indicando não haver itens suficientes em estoque para
      atender o pedido. */

int main ()
{
    int estoque, pedido, restante = 0;
    char c;    
    
    printf("Olá!\nQual o número de itens no estoque? ");
    scanf("%d", &estoque);
    printf("Qual o número de itens a serem pedidos? ");
    scanf("%d", &pedido);
    
    restante = estoque - pedido;
    if (restante >= 0){
	    printf("\nRestante em estoque: %d\n", restante);
    }
    else
        printf("\nO estoque não tem itens o suficiente para o pedido informado.\n");
    
    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
    return 0;
}
