#include <stdio.h>

/* 2. Faça um programa que recebe três valores reais e verifica se estes podem corresponder aos lados de um
      triângulo retângulo. A saída do programa deve ser sempre uma mensagem.
        • Se A >=B + C não é formado nenhum triângulo e se A² = B² + C², então o triângulo é retângulo. */

int main ()
{
    float ladoa, ladob, ladoc, soma_catetos, soma_lados;
    char c;    
    
    printf("Olá! \nDigite três valores para três lados de um triângulo: ");
    scanf("%f %f %f", &ladoa, &ladob, &ladoc);
    
    soma_catetos = (ladob * ladob) + (ladoc * ladoc);
    soma_lados = ladob + ladoc;
    
    if (ladoa * ladoa == soma_catetos){
        printf("Os valores %.1f, %.1f e %.1f formam um triângulo retângulo.", ladoa, ladob, ladoc);
    }
    else if (ladoa < soma_lados){
	    printf("\nOs valores %.1f, %.1f e %.1f formam um triângulo não retângulo.", ladoa, ladob, ladoc);
    }
    else {
        printf("\nOs valores %.1f, %.1f e %.1f não formam um triângulo.", ladoa, ladob, ladoc);
    }    

    printf("\nENTER para sair. %c", c = getchar());
    c = getchar();
    return 0;
}
