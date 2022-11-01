#include <stdio.h>
#include <locale.h>

int VerificaPAR(int n1, int n2);
int numIni, numFim, par;

int inicial;
 main()
{
	
	setlocale(LC_ALL,"Portuguese");	
	// IDENTIFICAÇÃO DO ALUNO
	printf("\n\n\tAVALIAÇÃO: >>> AVA2\n");
	printf("    \tALUNO: >>> WILLIAN BORGES DE MELLO\n");
	printf("\tMATRÍCULA: >>> 20224301080\n");
	printf("    \tTURMA: >>> 2022.04 \n\n");
	//INICIO
	printf("\n\n********* Estrutura de Repetição com For *********\n\n");
	printf("Digite o número Inicial:>");
	scanf("%d", &numIni);
	printf("Digite o número Final:>");
	scanf("%d", &numFim);
	
	
	while(numIni >= numFim){
	printf("Digitou um número nemor que o Inicial, digite uma maior que %d \n", numIni);
	scanf("%d", &numFim);
	}
	
	 VerificaPAR(numIni,numFim);						
}
	
	
	//FUNÇÃO CRIADA
	int VerificaPAR(int n1, int n2){
	printf("\n\n**********COMEÇANDO O CÁLCULO**********\n\n");
	
	//VERIFICA SE O NÚMERO INICIAL É PAR OU ÍMPAR
	if(numIni%2==0){
		printf("O número INICIAL %d é PAR\n\n", numIni);
		par = par + 1;			
	}else{
		printf("O número Inicial %d é ÍMPAR\n\n", numIni);
	}
	
	
	//VERIFICA SE O NÚMERO FINAL É PAR OU ÍMPAR
	if(numFim%2==0){
		printf("O número FINAL %d é PAR\n\n", numFim);
		par = par + 1;			
	}else{
		printf("O número FINAL %d é ÍMPAR\n\n", numFim);
	}
	
	//FAZ O LOOP E VERIFICA QUEM É PAR E NO FINAL MOSTRA A QUANTIDADE DE PAR
	for(int c = numIni+1; c <= numFim; c++)	
		if(c%2==0){				
			printf("o número %d é PAR \n", c);
			par = par + 1;
		}else{		
			printf("o número %d é ÍMPAR\n", c);
		}
		
		printf("\n\nExiste %d números Pares.", par);
		
	}
	
	
	
	
	
	
