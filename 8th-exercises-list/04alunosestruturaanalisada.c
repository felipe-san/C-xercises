/*
4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do
aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
 Permita ao usuário entrar com os dados de 5 alunos.
 Encontre o aluno com maior nota da primeira prova.
 Encontre o aluno com maior média geral.
 Encontre o aluno com menor média geral.
 Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
    int num_matricula;
    float p1, p2, p3, media;
    char nome[50], status[10];
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
    struct Aluno aluno[5];
    int i, ind_maior_med, ind_menor_med, ind_maior_p1;
    float maiorp1 = -1, maior_media = -1, menor_media = 11, valor_aprovacao = 6;

   
    for (i = 0; i < 5; i++){
        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\nNome: ");
        fgets(aluno[i].nome, 50, stdin);

        printf("Matricula: ");
        scanf("%*c%d%*c", &aluno[i].num_matricula);

        aluno[i].p1 = RecebeNota(1);
        aluno[i].p2 = RecebeNota(2);
        aluno[i].p3 = RecebeNota(3); 

        aluno[i].media = (aluno[i].p1 + aluno[i].p2 + aluno[i].p3) / 3;  

        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\n");
    }

    printf("\n\nMOSTRANDO OS RESULTADOS!");

    for (i = 0; i < 5; i++){
        if (aluno[i].p1 > maiorp1){
            maiorp1 = aluno[i].p1;
            ind_maior_p1 = i;
        }
        if (aluno[i].media > maior_media){
            maior_media = aluno[i].media;
            ind_maior_med = i;
        }
        if (aluno[i].media < menor_media){
            menor_media = aluno[i].media;
            ind_menor_med = i;        
        }
        
        if (aluno[i].media >= valor_aprovacao) strcpy(aluno[i].status, "APROVADO");
        else strcpy(aluno[i].status, "REPROVADO");
    }

    printf("\nMaior P1: %.1f - %s\nMaior Media: %.1f %s\nMenor Media: %.1f - %s\n\n", aluno[ind_maior_p1].p1, aluno[ind_maior_p1].nome, aluno[ind_maior_med].media, aluno[ind_maior_med].nome, aluno[ind_menor_med].media, aluno[ind_menor_med].nome);

    for (i = 0; i < 5; i++){
        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\nNome: %s\nStatus: %s", aluno[i].nome, aluno[i].status);    
        printf("\n================== Registro No. %d ==================\n", i + 1);
        printf("\n");
    }


    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;

}
