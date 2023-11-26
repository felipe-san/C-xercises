/*
3. Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do usuário a informação de 5
alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
    int num_matricula;
    char nome[50], curso[75];
};

int main(){
    struct Aluno aluno[5];
    int numero, i = 0;
   
    for (numero = 0; numero < 5; numero++){
        printf("\n================== Registro No. %d ==================\n", numero + 1);
        printf("\n1. Nome: ");
        fgets(aluno[numero].nome, 50, stdin);
        aluno[numero].nome[strcspn(aluno[numero].nome, "\n")] = 0;

        printf("2. Curso: ");
        fgets(aluno[numero].curso, 75, stdin);        

        printf("3. Matricula: ");
        scanf("%d%*c", &aluno[numero].num_matricula);
    
    }

    printf("\n\nMOSTRANDO OS RESULTADOS!\n\n");

    for (numero = 0; numero < 5; numero++){
        printf("\n================== Registro No. %d ==================\n", numero + 1);
        printf("\nNome: %s\nMatricula: %d\nCurso: %s", aluno[numero].nome, aluno[numero].num_matricula, aluno[numero].curso);    
    }


    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((numero = getchar()) != '\n' && numero != EOF);
    printf("\n");
    return 0;

}
