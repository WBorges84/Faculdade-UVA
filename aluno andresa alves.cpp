#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int Pares(int valor); //declarando a fun��o

int par; //declarando a variavel global

int main()
{
	int c, i, f, pares;
	setlocale(LC_ALL,"Portuguese");	
	printf("digite o primeiro numero: ");
	scanf ("%d",&i);	
    printf("digite o �ltimo numero: ");
    scanf ("%d",&f);
    
    	while(f<=i){
		printf("Digite uma numero valido, maior que o primeiro %d", i);
		printf("\nDigite um numero final: ");
        scanf ("%d",&f);
	}
	
	for(int c=i; c<=f; c++){
		
		Pares(c);		
		
	}
	
	printf("\na quantidade de numeros pares e %d", par);
}



//fun��o verifica PAR
Pares(int valor){
	if(valor%2==0){				
			printf("o n�mero %d � PAR \n", valor);
			par++;
		}else{		
			printf("o n�mero %d � �MPAR\n", valor);
			
		}

}
