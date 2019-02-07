/*07/02/2019, Estrutura de Dados, Praticando C*/


#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int g = 1, i, j, soma = 0;
	for(i = 0; i < 8; i++){
		for (j = 0; j < 8; j++){
			printf("%d\t", g);
			soma = soma + g;
			g++;
		}
		printf("\n");
	};
	printf("\n\nSomatório: %d", soma);
}
