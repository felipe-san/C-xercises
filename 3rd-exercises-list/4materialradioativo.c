#include <stdio.h>

/* 4. Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, em
gramas, fazer um programa em C que calcule o tempo necessário para que essa massa se torne menor que 0,5
grama. O programa em C deve escrever a massa inicial, a massa final e o tempo calculado em horas, minutos e
segundos. */

int main ()
{
	float massa_inicial, massa_final;
    int tempo;
    char c;
	
    printf("Digite um valor em gramas que sera designado a massa de um meterial radioativo: ");
    scanf("%f", &massa_inicial);
    for (tempo = 0, massa_final = massa_inicial; massa_final > 0.5; ++tempo)
    {
        if (tempo % 50 == 0)
        {        
            massa_final = massa_final / 2;
        }
    }
    
    printf("\n-------CHECAGEM-------\n");
    printf("Massa inicial: %.2f\n", massa_inicial);
    printf("Massa final: %.2f\n", massa_final);
    printf("Tempo ate a massa ficar menor que 0,5g: %02dh%02dm%02ds.", (tempo / 60 / 60) % 24, (tempo / 60) % 60 , tempo % 60);
    printf("\n-------CHECAGEM-------\n");

    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
