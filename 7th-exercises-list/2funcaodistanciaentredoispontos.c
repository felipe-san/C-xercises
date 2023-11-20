#include <stdio.h>

/*
2. Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e (x2, y2). Todos os números e
valores de retorno devem ser do tipo float.
*/

// Funcao para calculo de distancia entre um escalar e outro
float distancia(float num1, float num2){
    return num2 - num1;
}

// Funcao para calculo de raiz quadrada
float rzqd(float num){
    float raiz = num;
    while (1){
        if (raiz * raiz != num) raiz = (num / raiz + raiz) / 2;
        else break;
    }
    return raiz;    
}

// Funcao para calculo do modulo da distancia entre dois pontos
float mod_distancia(float num1, float num2){
    //iniciando a variavel a ser retornada somando os quadrados das componentes do vetor deslocamento
    float result = (num1 * num1) + (num2 * num2);

    //calculando e retornando raiz quadrada
    result = rzqd(result);    
    return result;
}

// Funcao principal
int main(){
    float pontos[2][2], vetor_desl[1][1], dist;
    int i, j;

    //recebendo os valores dos pontos
    printf("\nDigite valores para dois pontos.\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Ponto %d %c: ", i + 1, j + 120);
            scanf("%f", &pontos[i][j]);
        }
    }

    //calculando o vetor deslocamento e a distancia
    vetor_desl[0][0] = distancia(pontos[0][0], pontos[1][0]);
    vetor_desl[0][1] = distancia(pontos[0][1], pontos[1][1]);
    dist = mod_distancia(vetor_desl[0][0], vetor_desl[0][1]);
    
    //mostrando o vetor deslocamento e a distancia
    printf("Vetor deslocamento: (x: %.2f, y: %.2f)", vetor_desl[0][0], vetor_desl[0][1]);

    printf("\nModulo da distancia: %.2f\n", dist);

    //Para evitar que o programa feche rapido demais em algumas maquinas
    printf("\nFIM!\nPressione ENTER para finalizar.");
    getchar();
    while ((i = getchar()) != '\n' && i != EOF);
    printf("\n");
    return 0;
}
