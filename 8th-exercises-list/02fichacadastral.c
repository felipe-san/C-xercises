/*
2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma
estrutura.
*/

#include <stdio.h>
#include <string.h>

struct Pessoa
{
    int idade;
    char nome[50], endereco[75];
};

int main(){
    struct Pessoa pessoa1;
    int numero = 0;
   
    printf("\nOla! Digite um nome: ");
    fgets(pessoa1.nome, 50, stdin);
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = 0;

    printf("Digite uma idade: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite seu endereco: ");
    getchar();
    while ((pessoa1.endereco[numero] = getchar()) != '\n' && numero < 75)
        numero++;
        

    printf("\nNome: %s\nIdade: %d\nEndereco: %s\n\n", pessoa1.nome, pessoa1.idade, pessoa1.endereco);

    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((numero = getchar()) != '\n' && numero != EOF);
    printf("\n");
    return 0;

}
