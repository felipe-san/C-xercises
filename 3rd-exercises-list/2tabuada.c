#include <stdio.h>

/* 2. Criar um algoritmo para exibir as tabuadas de multiplicação dos números de 1 a 10. */

int main ()
{
	int i, j;
    char c;
	
	for (i=1; i<=10; ++i){
		printf("\nTabuada do %d:", i);

		for (j=1; j<=10; ++j)
			printf("\n%d x %2d = %3d", i, j, i*j);

		putchar('\n');
	}

    printf("\nENTER para sair.");
    c = getchar();
}
