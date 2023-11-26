/*
10. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), ano e preço. Leia um
valor p e mostre as informações de todos os carros com preço menor que p. Repita este processo até que seja
lido um valor p = 0.
*/

#include <stdio.h>
#include <string.h>

struct Carro
{
    char marca[15];
    float preco;
    int ano;
};

int RecebeAno(){
    int num = 1885;
    while (num < 1886 | num > 2024){
        scanf("%d%*c", &num);
    }
    return num;
}

int main(){
    int i, qntd = 5;
    float preco;
    struct Carro carros[qntd];
    
    printf("\n==== Cadastrando Carros ====\n");
    for (i = 0; i < qntd; i++){
        printf("\n=========== Registro No.%d ===========\n", i + 1);

        printf("\nMarca: ");
        fgets(carros[i].marca, 15, stdin);

        printf("\nAno: ");
        carros[i].ano = RecebeAno();

        printf("\nPreco: R$");
        scanf("%f%*c", &carros[i].preco);

        printf("\n=========== Registro No.%d ===========\n", i + 1);
        printf("\n");
    }    
    printf("\n==== Cadastrando Carros ====\n"); 
    printf("\n\n");
    
    do {
        printf("\n\n\nAgora digite um preco, que lhe darei uma lista com carros com preco abaixo do mesmo (ou digite 0 para terminar a execucao)\nR$");
        scanf("%f%*c", &preco);
        
        printf("\n==== Lista de Carros mais Baratos ====\n");
     
        for (i = 0; i < qntd; i++){
            if (carros[i].preco < preco){
                printf("\n=========== Registro No.%d ===========\n", i + 1);
                printf("\nMarca: %s\nAno: %d\nPreco: R$%.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);

                printf("\n=========== Registro No.%d ===========\n", i + 1);
            }
        }

        printf("\n==== Lista de Carros mais Baratos ====\n\n"); 
    } while (preco != 0);

   //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;

}
