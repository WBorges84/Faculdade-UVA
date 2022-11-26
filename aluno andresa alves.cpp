#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int Pares(int valor); //declarando a função

int par; //declarando a variavel global

int main()
{
	int c, i, f, pares;
	setlocale(LC_ALL,"Portuguese");	
	printf("digite o primeiro numero: ");
	scanf ("%d",&i);	
    printf("digite o último numero: ");
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



//função verifica PAR
Pares(int valor){
	if(valor%2==0){				
			printf("o número %d é PAR \n", valor);
			par++;
		}else{		
			printf("o número %d é ÍMPAR\n", valor);
			
		}

}
