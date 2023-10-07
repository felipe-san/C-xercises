#include <stdio.h>

/* 6. Faça um programa que calcule a média aritmética entre 3 notas de vários alunos de uma turma. O programa
deverá perguntar se deve ou não continuar processando um próximo aluno ou não! No final mostre a maior
média, a menor média e a média aritmética da turma. */

int main ()
{
	float n1, n2, n3, media = 0, maior_media = 0, menor_media = 0, media_turma = 0, soma_media = 0;
    int num_aluno, opcao = 0;    
    char c;

	printf("Digite tres notas de n alunos. \n\n");
    for (num_aluno = 0; opcao == 0; ++num_aluno)
    {

        printf("\n--------------ALUNO N %02d--------------", num_aluno + 1);
        // estrutura de repeticao que evita entrada invalida na primeira nota
        while (1)
        {
            printf("\nDigite a primeira nota do aluno %d: ", num_aluno + 1);
            scanf("%f", &n1);            

            // caso 0 >= nota >= 10, chama o comando break e encerra a repeticao
            if (0 <= n1 & n1 <= 10)
            {
                break;
            }
            // caso nao, o programa avisa que uma entrada invalida foi feita e repete
            else
                printf("\nValor invalido. \nTente novamente.\n");
                    
        }        

        // estrutura de repeticao que evita entrada invalida na segunda nota
        while (1)
        {
            printf("\nDigite a segunda nota do aluno %d: ", num_aluno + 1);
            scanf("%f", &n2);            

            // caso 0 >= nota >= 10, chama o comando break e encerra a repeticao
            if (0 <= n2 & n2 <= 10)
            {
                break;
            }
            // caso nao, o programa avisa que uma entrada invalida foi feita e repete
            else
                printf("\nValor invalido. \nTente novamente.\n");   
        }        
        
        // estrutura de repeticao que evita entrada invalida na terceira nota
        while (1)
        {
            printf("\nDigite a terceira nota do aluno %d: ", num_aluno + 1);
            scanf("%f", &n3);            
            
            // caso 0 >= nota >= 10, chama o comando break e encerra a repeticao
            if (0 <= n3 & n3 <= 10)
            {
                break;
            }
            // caso nao, o programa avisa que uma entrada invalida foi feita e repete
            else
                printf("\nValor invalido. \nTente novamente.\n");
        }        

        // media individual do aluno
        media = (n1 + n2 + n3) / 3;
        // soma incremental das medias da turma 
        soma_media += media;

        // definicao da primeira media como a maior e a menor ao mesmo tempo
        if (num_aluno == 0)
        {
            maior_media = media;
            menor_media = media;        
        }
        
        // estrutura de decisao para classificar a media de aluno n (que nao o primeiro)
        else if (media > maior_media)
        {
            maior_media = media;
        }
        
        else if (media < menor_media)
        {
            menor_media = media;
        }        
        
        printf("\nMedia do aluno %d: %.2f", num_aluno + 1, media);
        printf("\n--------------ALUNO N %02d--------------", num_aluno + 1);

        printf("\n\nQuer continuar? [0 = s /qualquer outro numero = n] ");
        scanf("%d", &opcao);
    }
    
    media_turma = soma_media / num_aluno;
    
    printf("\n--------------RELATORIO--------------\n");
    printf("\nNumero de alunos avaliados: %2d", num_aluno);
    printf("\nMaior media: %20.2f", maior_media);
    printf("\nMenor media: %20.2f", menor_media);
    printf("\nMedia da turma: %17.2f\n", media_turma);
    printf("\n--------------RELATORIO--------------\n");
 
    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
}
