#include <stdio.h>
#include <locale.h>

int VerificaPAR(int n1, int n2);
int numIni, numFim, par;

int inicial;
 main()
{
	
	setlocale(LC_ALL,"Portuguese");	
	// IDENTIFICA��O DO ALUNO
	printf("\n\n\tAVALIA��O: >>> AVA2\n");
	printf("    \tALUNO: >>> WILLIAN BORGES DE MELLO\n");
	printf("\tMATR�CULA: >>> 20224301080\n");
	printf("    \tTURMA: >>> 2022.04 \n\n");
	//INICIO
	printf("\n\n********* Estrutura de Repeti��o com For *********\n\n");
	printf("Digite o n�mero Inicial:>");
	scanf("%d", &numIni);
	printf("Digite o n�mero Final:>");
	scanf("%d", &numFim);
	
	
	while(numIni >= numFim){
	printf("Digitou um n�mero nemor que o Inicial, digite uma maior que %d \n", numIni);
	scanf("%d", &numFim);
	}
	
	 VerificaPAR(numIni,numFim);						
}
	
	
	//FUN��O CRIADA
	int VerificaPAR(int n1, int n2){
	printf("\n\n**********COME�ANDO O C�LCULO**********\n\n");
	
	//VERIFICA SE O N�MERO INICIAL � PAR OU �MPAR
	if(numIni%2==0){
		printf("O n�mero INICIAL %d � PAR\n\n", numIni);
		par = par + 1;			
	}else{
		printf("O n�mero Inicial %d � �MPAR\n\n", numIni);
	}
	
	
	//VERIFICA SE O N�MERO FINAL � PAR OU �MPAR
	if(numFim%2==0){
		printf("O n�mero FINAL %d � PAR\n\n", numFim);
		par = par + 1;			
	}else{
		printf("O n�mero FINAL %d � �MPAR\n\n", numFim);
	}
	
	//FAZ O LOOP E VERIFICA QUEM � PAR E NO FINAL MOSTRA A QUANTIDADE DE PAR
	for(int c = numIni+1; c <= numFim; c++)	
		if(c%2==0){				
			printf("o n�mero %d � PAR \n", c);
			par = par + 1;
		}else{		
			printf("o n�mero %d � �MPAR\n", c);
		}
		
		printf("\n\nExiste %d n�meros Pares.", par);
		
	}
	
	
	
	
	
	
