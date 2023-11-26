/*
6. Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário de
uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde
trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo
usuário, armazenados na estrutura e exibidos na tela.
*/

#include <stdio.h>
#include <string.h>

struct Funcionario
{
    int idade, setor;
    float salario;
    char nome[50], sexo[2], cpf[15], data_nasc[12], cargo[30];
};

int RecebeNum(){
    int num = -1;
    while (num < 0 | num > 100){
        scanf("%d%*c", &num);
    }
    return num;
}

int main(){
    int i;
    struct Funcionario funcionario;
    
    printf("\n==== Registro de funcionario ====\n");

    printf("\nNome: ");
    fgets(funcionario.nome, 50, stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = 0;

    printf("\nIdade: ");
    funcionario.idade = RecebeNum();
    do {
        printf("\nSexo (M/F): ");
        fgets(funcionario.sexo, 2, stdin);
        if (funcionario.sexo[0] >= 97 && funcionario.sexo[0] <= 122) funcionario.sexo[0] -= 32;
    } while (funcionario.sexo[0] != 'M' && funcionario.sexo[0] != 'F');
    
    scanf("%*c");
    printf("\nCPF: ");
    fgets(funcionario.cpf, 15, stdin);
    funcionario.cpf[strcspn(funcionario.cpf, "\n")] = 0;

    printf("\nData de nascimento: ");
    fgets(funcionario.data_nasc, 11, stdin);

    scanf("%*c");
    printf("\nCodigo do setor: ");
    funcionario.setor = RecebeNum();
    
    printf("\nCargo: ");
    fgets(funcionario.cargo, 30, stdin);
    funcionario.cargo[strcspn(funcionario.cargo, "\n")] = 0;

    printf("\nSalario: ");
    scanf("%f%*c", &funcionario.salario);

    printf("\n==== Registro de funcionario ====\n");     
    printf("\n\n");

    printf("\n==== Ficha de funcionario ====\n"); 

    printf("\nNome: %s\nIdade: %d anos\nSexo: %s\nCPF: %s\nData de nascimento: %s\nCodigo do setor: %d\nCargo: %s\nSalario: R$%.2f\n", funcionario.nome, funcionario.idade, funcionario.sexo, funcionario.cpf, funcionario.data_nasc, funcionario.setor, funcionario.cargo, funcionario.salario);

    printf("\n==== Ficha de funcionario ====\n"); 

   //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;

}
