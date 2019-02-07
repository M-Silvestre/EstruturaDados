/*07/02/2019, Estrutura de Dados, Revisando C*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("M�dia das 3 notas de 10 alunos\n");
	
	int i, j;
	float mat[10][4];
	printf("\nInforme as notas de cada aluno, usando a v�rgula para separar as casas decimais");
	for(i = 0; i < 10; i++){
		printf("\n\nAluno %d", (i + 1));
		for(j = 0; j < 3; j++){
			printf("\n\tNota %d: ", (j + 1));
			scanf("%f", &mat[i][j]);
		};
		mat[i][3] = (mat[i][0] + mat[i][1] + mat[i][2])/3.0;
	};
	
	printf("\n\n Notas e M�dias");
	for(i = 0; i < 10; i++){
		printf("\n\nAluno %d:", (i + 1));
		for(j = 0; j < 4; j++){
			printf("\t%.2f", mat[i][j]);
		}
	}
	
}
