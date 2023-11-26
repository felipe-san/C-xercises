/*
8. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e telefone de 5 pessoas e
os imprima em ordem alfabética.
*/

#include <stdio.h>
#include <string.h>

struct Contato
{
    char nome[50], endereco[75], telefone[20];
};

int main(){
    int i, j, qntd = 5;
    struct Contato aux;
    struct Contato lista_telefonica[qntd];
    
    printf("\n==== Cadastrando na lista telefonica ====\n");
    for (i = 0; i < qntd; i++){
        printf("\n=========== Registro No.%d ===========\n", i + 1);
        printf("\nNome: ");
        fgets(lista_telefonica[i].nome, 50, stdin);
        printf("\nEndereco: ");
        fgets(lista_telefonica[i].endereco, 75, stdin);
        printf("\nTelefone: ");
        fgets(lista_telefonica[i].telefone, 20, stdin);
        printf("\n=========== Registro No.%d ===========\n", i + 1);
        printf("\n");
    }    
    printf("\n==== Cadastrando na lista telefonica ====\n"); 
    printf("\n\n");

    printf("\n==== Lista Telefonica Ordenada Alfabeticamente ====\n"); 
    for (i = 0; i < qntd; i++){
        for (j = 0; j < qntd - 1; j++){
            if (strcmp(lista_telefonica[j].nome, lista_telefonica[j + 1].nome) > 0){
                aux = lista_telefonica[j];
                lista_telefonica[j] = lista_telefonica[j + 1];
                lista_telefonica[j + 1] = aux;  
            } 
        }
    }
    for (i = 0; i < qntd; i++){
        printf("\n=========== Registro No.%d ===========\n", i + 1);
        printf("\nNome: %s\nTelefone: %s\nEndereco: %s\n", lista_telefonica[i].nome, lista_telefonica[i].telefone, lista_telefonica[i].endereco);
        printf("\n=========== Registro No.%d ===========\n\n", i + 1);
    }

    printf("\n\n==== Lista Telefonica Ordenada Alfabeticamente ====\n"); 

   //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;

}
