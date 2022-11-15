#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()

{
    int cpf, num, idade;
    char name[50]; 

    printf("Digite seu nome: ");
    scanf("%s", &name);
    
    printf("Digite sua Idade: ");
    scanf("%i", &idade);
    
    printf("Digite seu CPF: ");
    scanf("%i", &cpf);
    
    printf("%s \n", name);
    printf("%i \n", idade);
    
    num = 10014515709;



    if(cpf == num)
		{		
      printf ("Voce esta autorizado");
  		}
       else
	   {
		printf ("Acesso Restrito");
		}   


    return 0;
}
