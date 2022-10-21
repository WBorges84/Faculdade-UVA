#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float v1, v2,soma, subtracao, multiplicacao, divisao, result;
    int opc;
    char *txt;
    setlocale(LC_ALL, "Portuguese");
    printf("\n\t Calculadora AV1\n\n");
    printf("\n Digite o primeiro valor a ser calculado.\n");
    scanf("%f", &v1);
    printf("\n Digite o segundo valor a ser calculado.\n");
    scanf("%f", &v2);
    printf("\n O que deseja fazer com os valores digitados?\n\n");
    printf("Opcao 1 - SOMA \n");
    printf("Opcao 2 - SUBTRAÇÃO \n");
    printf("Opcao 3 - MuLTIPLICAÇÃO \n");
    printf("Opcao 4 - DIVISÃO \n\n");
    scanf("%d", &opc);

    if (opc == 1)
        {
        result = v1 + v2;	
    	txt = "SOMA";
  		}
    	
    if (opc == 2)
    	{
    	result = v1 - v2;	
    	txt = "SUBTRAÇÃO";
  		}
  		
  	if (opc == 3)
    	{
    	result = v1 * v2;	
    	txt = "MULTIPLICAÇÃO";
  		}
	
	if (opc == 4)
    	{
    	result = v1 / v2;	
    	txt = "DIVISÃO";
  		}	
        
      
    printf("\n\t ******* Escolhido a %s", txt);
    printf(" o resultado é : %.1f *******\n\n", result);
    
	return 0;    
}
