#include <stdio.h>

/*
7. Leia uma matriz 5x10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos. Leia
também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa
deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado,
contendo a pontuação correspondente a cada aluno.
*/

int main (){
	char respostas[5][10], gabarito[10], aux;
	int i, j, resultado[5];
	
    printf("\nEntre com as respostas dos 5 alunos a seguir para calcular o resultado da prova de multipla escolha.\nAtencao: respostas apenas de a ate d. \n");
    for(i = 0; i < 5; i++){
        printf("\n");
        for(j = 0; j < 10; j++){
            do {
                printf("Aluno %d-%d. ", i + 1, j + 1);
                while ((aux = getchar()) != '\n')
                    if (aux != '\n') respostas[i][j] = aux;
            }
            while (respostas[i][j] != 'a' && respostas[i][j] != 'b' && respostas[i][j] != 'c' && respostas[i][j] != 'd');
            }
    }

    printf("\n\nDigite agora o gabarito.\n");

    for(i = 0; i < 10; i++){
        do{    
            printf("%d. ", i + 1);
            while ((aux = getchar()) != '\n')
                if (aux != '\n') gabarito[i] = aux;
        }
        while (gabarito[i] != 'a' && gabarito[i] != 'b' && gabarito[i] != 'c' && gabarito[i] != 'd');
    }

    for(i = 0; i < 5; i++){
        resultado[i] = 0;
        for(j = 0; j < 10; j++){
            if (respostas[i][j] == gabarito[j]){
                 resultado[i] += 1;
            }
        }
        printf("\nResultado do aluno %d: %d", i + 1, resultado[i]);
    }

    printf("\n");
	return 0;
}


