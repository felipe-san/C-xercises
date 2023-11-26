/*
5. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: Matrícula, Nome,
Código da Disciplina, Nota1 e Nota2. Considere uma turma de até 10 alunos. Após ler todos os dados digitados,
e depois de armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas
respectivas médias finais (use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0)
*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
    int num_matricula, codigo_disc;
    float p1, p2, media;
    char nome[50];
};

float RecebeNota(int num){
    float nota = -1;
    while (nota < 0 | nota > 10){
        printf("\nNota da P%d: ", num);
        scanf("%f%*c", &nota);
    }
    return nota;
}

int main(){
    int i, quantidade_alunos = 2;
    struct Aluno aluno[quantidade_alunos];

    for (i = 0; i < quantidade_alunos; i++){
        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\nNome: ");
        fgets(aluno[i].nome, 50, stdin);

        printf("Matricula: ");
        scanf("%d", &aluno[i].num_matricula);
        
        printf("Codigo da Disciplina: ");
        scanf("%*c%d%*c", &aluno[i].codigo_disc);

        aluno[i].p1 = RecebeNota(1);
        aluno[i].p2 = RecebeNota(2);

        aluno[i].media = ((aluno[i].p1 * 1.0) + (aluno[i].p2 * 2.0)) / 3.0;

        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\n");
    }

    for (i = 0; i < quantidade_alunos; i++){
        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\nNome: %s\nMatricula: %d\nCodigo de Disciplina: %d\nNota da P1: %.1f\nNota da P2: %.1f\nMedia: %.1f", aluno[i].nome, aluno[i].num_matricula, aluno[i].codigo_disc, aluno[i].p1, aluno[i].p2, aluno[i].media);    
        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\n");
    }


    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;

}
