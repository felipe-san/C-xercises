/*
7. Faça um programa que faça operações simples de números complexos:
 Crie e leia dois números complexos z e w, compostos por parte real e parte imaginária.
 Apresente a soma, subtração e produto entre z e w, nessa ordem, bem como o módulo de ambos.
*/

#include <stdio.h>

struct Complexo
{
    int real, imaginario;
};

int main(){
    int i;
    struct Complexo z;
    struct Complexo w;
    
    printf("\n==== Recebendo numeros complexos ====\n");

    printf("\nDigite a parte real do complexo z: ");
    scanf("%d", &z.real);

    printf("\nDigite a parte imaginaria do complexo z: ");
    scanf("%d", &z.imaginario);
    
    printf("\nDigite a parte real do complexo w: ");
    scanf("%d", &w.real);

    printf("\nDigite a parte imaginaria do complexo w: ");
    scanf("%d", &w.imaginario);

    printf("\n==== Recebendo numeros complexos ====\n");     
    printf("\n\n");

    printf("\n==== Operacoes entre complexos ====\n"); 

    printf("\nSoma: (%d) + (%d)i", z.real + w.real, z.imaginario + w.imaginario);
    printf("\nSubtracao: (%d) + (%d)i", z.real - w.real, z.imaginario - w.imaginario);
    printf("\nProduto: (%d) + (%d)i", (z.real * w.real) - (z.imaginario * w.imaginario), (z.real * w.imaginario) + (z.imaginario * w.real));

    printf("\nModulo de z: ");
    if (z.real < 0) printf("%d", -z.real);
    else printf("%d", z.real);
    printf(" + ");
    if (z.imaginario < 0) printf("%d", -z.imaginario);
    else printf("%d", z.imaginario);
    printf("i");

    printf("\nModulo de w: ");
    if (w.real < 0) printf("%d", -w.real);
    else printf("%d", w.real);
    printf(" + ");
    if (w.imaginario < 0) printf("%d", -w.imaginario);
    else printf("%d", w.real);
    printf("i");    

    printf("\n\n==== Operacoes entre complexos ====\n"); 

   //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;

}
