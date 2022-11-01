#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void VerificaPar(int n1, int n2 );
int main()
{
//INTRODUÇÃO À LÓGICA DE PROGRAMAÇÃO 
//AVA 2
//ALUNO : WILLIAN BORGES DE MELLO
//Matricula : 20224301080 
//TURMA : 2022.4

	int numIni, numFim ;

	setlocale(LC_ALL, "Portuguese");
	printf("\t****AVA2 Números Pares e Ímpares ****\n\n");
	printf("Digite o número inicial: ");
	scanf("%d", numIni);
	printf("Digite o número Final: ");
	scanf("%d", numFim);
	//VerificaPar(numIni, numFim);

	if (numIni % 2 == 0)
		{
		    printf("O numero %i é par", numIni);
		
		}else{
			printf("O numero %i é Ímpar", numIni);
		
		}
}

void VerificaPar(int n1, int n2 ){
	for (size_t i = n1; i <= n2; i++)
	{
		if (i % 2 == 0)
		{
		    printf("O numero %i é par", i);
		
		}else{
			printf("O numero %i é Ímpar", i);
		
		}
		
	}
	
}

