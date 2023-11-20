#include <stdio.h>

/*
6. Escreva uma função que receba 3 notas de um aluno e uma letra. Se a letra for A a função retorna a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for H, a sua média
harmônica.
*/

float MediaAritmetica(float notas[3]){
    float mediaarit = (notas[0] + notas[1] + notas[2]) / 3;
    return mediaarit; 
}

float MediaPonderada(float notas[3]){
    float somapesos, mediapon;
    somapesos = 5 + 3 + 2;
    mediapon = ((notas[0]* 5) + (notas[1]* 3) + (notas[2]* 2)) / somapesos;
    return mediapon;
}

float MediaHarmonica(float notas[3]){
    float mediahar;
    mediahar = 3 / ((1 / notas[0])+(1 / notas[1])+(1 / notas[2]));
    return mediahar;
}

float Verifica(float num, int iter){
    do{
        printf("%d. ", iter + 1);
        scanf("%f", &num);
    } while (num < 0 | num > 10);
    return num;
}

char Menu(float nots[3]){
    char option;
    do{
        printf("\n\nAgora escolha uma das opcoes abaixo.\nA - Media Aritmetica\nP - Media Ponderada\nH - Media Harmonica\nOpcao: ");
        scanf(" %c", &option);
        switch (option){
            case 'a':
            case 'A':
                printf("\nMedia Aritmetica escolhida!\nResultado: %.1f", MediaAritmetica(nots));
                break;
            case 'p':
            case 'P':
                printf("\nMedia Ponderada escolhida!\nResultado: %.1f", MediaPonderada(nots));
                break;
            case 'h':
            case 'H':
                printf("\nMedia Harmonica escolhida!\nResultado: %.1f", MediaHarmonica(nots));
                break;
            default:
                printf("\nOpcao Invalida.");
                option = 0;
        }
    } while (option == 0);
}

// Funcao principal
int main(){
    float notas[5];
    int i;

    printf("\nDigite valores positivos para 3 notas de um aluno.\n");
    for(i = 0; i < 3; i++){
        notas[i] = Verifica(notas[i], i);       
    } 
    getchar();
    
    Menu(notas);
    
    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\n\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;
}
