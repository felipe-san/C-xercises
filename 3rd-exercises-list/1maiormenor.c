#include <stdio.h>

/* 1. Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado. */

int main ()
{
    float valor_entrada, maior, menor;
    int i;
	char c;

    printf("Digite 15 valores reais.\n");
    
    for (i = 0; i < 15; ++i)
    { 
        printf("%d: ", i + 1);
        scanf("%f", &valor_entrada);    
        
        if (i == 0)
        {
            maior, menor = valor_entrada;
        }

        if (valor_entrada > maior)
        {
            maior = valor_entrada;
        }
        else if (valor_entrada < menor)
        {
            menor = valor_entrada;
        }
    }
    
    printf("Maior: %.2f | Menor: %.2f", maior, menor);
    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
