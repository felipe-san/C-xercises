#include <stdio.h>

/*
8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão
ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já
foi digitado anteriormente, o programa deverá pedir para ele digitar outro número. Note que cada valor digitado
pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos.
Exibir na tela o vetor final que foi digitado.
*/

int main (){
	int i, j, vetor[10], voltando = 0, entrada;
	
    printf("\nEntre com 10 valores DIFERENTES para preencher um vetor \n");
    printf("1. Digite um valor nao repetido: ");
    scanf("%d", &vetor[0]);

    for(i = 1; i < 10; i++){
        printf("\n");
        do {
            voltando = 1;
            printf("%d. Digite um valor nao repetido: ", i + 1);
            scanf("%d", &entrada);
            for (j = 0; j < i; j++){
                if (entrada == vetor[j]){
                    voltando = 0;
                    break;
                }
                else
                    vetor[i] = entrada;
            }        
        } 
        while (voltando == 0);
    }
    
    for(i = 0; i < 10; i++){
        printf("\n%d. %4d", i + 1, vetor[i]);    
    }

    printf("\n");
	return 0;
}



