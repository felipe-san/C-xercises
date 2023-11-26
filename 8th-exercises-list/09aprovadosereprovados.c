/*
9. faça um programa que leia os dados de 10 alunos (Nome, matrícula, Média Final), armazenando em um vetor.
Uma vez lidos os dados, divida estes dados em 2 novos vetores, o vetor dos aprovados e o vetor dos reprovados,
considerando a média mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de aprovados,
seguido dos dados do vetor de reprovados.
*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50], matricula[15];
    float media_final;
};

float RecebeNota(){
    float nota = -1;
    while (nota < 0 | nota > 10){
        scanf("%f%*c", &nota);
    }
    return nota;
}

int main(){
    int i, j, k, qntd = 10, qntd_rep = 0, qntd_apr = 0, valor_aprov = 5;
    struct Aluno alunos[qntd];
    
    printf("\n==== Cadastrando Alunos ====\n");
    for (i = 0; i < qntd; i++){
        printf("\n=========== Registro No.%d ===========\n", i + 1);

        printf("\nNome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("\nMatricula: ");
        fgets(alunos[i].matricula, 15, stdin);

        printf("\nMedia Final: ");
        alunos[i].media_final = RecebeNota();

        if (alunos[i].media_final < valor_aprov) qntd_rep += 1;
        else qntd_apr += 1;

        printf("\n=========== Registro No.%d ===========\n", i + 1);
        printf("\n");
    }    
    printf("\n==== Cadastrando Alunos ====\n"); 
    printf("\n\n");

    //dividindo a struct principal nas structs de alunos reprovados e de alunos aprovados
    struct Aluno alunos_rep[qntd_rep];
    struct Aluno alunos_apr[qntd_apr];
    for (i = 0, j = 0, k = 0; i < qntd; i++){
        if (alunos[i].media_final < valor_aprov){
            alunos_rep[j] = alunos[i];
            j++;        
        }
        else {
            alunos_apr[k] = alunos[i];
            k++;
        }
    }

    printf("\n\n==== Lista de Aprovacao ====\n");
 
    for (i = 0; i < qntd_apr; i++){
        printf("\n=========== Registro No.%d ===========\n", i + 1);
        printf("\nNome: %s\nMatricula: %s\nMedia final: %.1f\n", alunos_apr[i].nome, alunos_apr[i].matricula, alunos_apr[i].media_final);

        printf("\n=========== Registro No.%d ===========\n", i + 1);
    }

    printf("\n==== Lista de Aprovacao ====\n\n\n"); 

    printf("\n==== Lista de Reprovacao ====\n");
 
    for (i = 0; i < qntd_apr; i++){
        printf("\n=========== Registro No.%d ===========\n", i + 1);
        printf("\nNome: %s\nMatricula: %s\nMedia final: %.1f\n", alunos_rep[i].nome, alunos_rep[i].matricula, alunos_rep[i].media_final);

        printf("\n=========== Registro No.%d ===========\n", i + 1);
    }

    printf("\n==== Lista de Reprovacao ====\n\n"); 


   //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;

}
