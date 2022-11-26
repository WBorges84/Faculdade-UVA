#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//ava2- camila endlich pimenta/

int main()
{
	int cont, inicial, final, pares;
	
	setlocale (LC_ALL, "Portuguese");
	
	
	printf("digite um número inicial: ");
	scanf ("%d",&inicial);
	
    printf("digite um número final: ");
    scanf ("%d",&final);
    
	cont= ("%d", inicial);
	pares = 0;
	
	while(final<=inicial){
		printf("Digite uma número válido, maior que o inicial %d", inicial);
		printf("\ndigite um número final: ");
        scanf ("%d",&final);
	}
	
	for(cont=inicial; cont<=final; cont++)
	{
		if (cont%2== 0)
		{
			printf("\no número %d é par\n", cont);
			pares++;
		}
		else 
		printf("\no número %d é ímpar\n", cont);
		
	}
	printf("\na quantidade de números pares é %d", pares);
}
