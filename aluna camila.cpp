#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//ava2- camila endlich pimenta/

int main()
{
	int cont, inicial, final, pares;
	
	setlocale (LC_ALL, "Portuguese");
	
	
	printf("digite um n�mero inicial: ");
	scanf ("%d",&inicial);
	
    printf("digite um n�mero final: ");
    scanf ("%d",&final);
    
	cont= ("%d", inicial);
	pares = 0;
	
	while(final<=inicial){
		printf("Digite uma n�mero v�lido, maior que o inicial %d", inicial);
		printf("\ndigite um n�mero final: ");
        scanf ("%d",&final);
	}
	
	for(cont=inicial; cont<=final; cont++)
	{
		if (cont%2== 0)
		{
			printf("\no n�mero %d � par\n", cont);
			pares++;
		}
		else 
		printf("\no n�mero %d � �mpar\n", cont);
		
	}
	printf("\na quantidade de n�meros pares � %d", pares);
}
