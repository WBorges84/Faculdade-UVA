#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float v1, v2,soma, subtracao, multiplicacao, divisao, rSoma, rSub, rDiv, rMul;
    int opc, op;
    const  char *txt;
    setlocale(LC_ALL, "Portuguese");    
    printf("\n\n\tAluno: Willian Borges de Mello\n");
    printf("\tMatricula: 20224301080\n");
    printf("\tTurma: 2022.4 \n\n");
    printf("\n\t *--* Calculadora AVA 1 *--*\n\n");
    printf("\n Digite o primeiro valor a ser calculado.\n ->");
    scanf("%f", &v1);
    printf("\n Digite o segundo valor a ser calculado.\n ->");
    scanf("%f", &v2);
    
    op = 1;
while (op != 0)
{    
    printf("\n O que deseja fazer com os valores digitados?\n\n");
    printf(" Opcao 1 - SOMA \n");
    printf(" Opcao 2 - SUBTRA��O \n");
    printf(" Opcao 3 - MuLTIPLICA��O \n");
    printf(" Opcao 4 - DIVIS�O \n\n ->");
    scanf("%d", &opc);
    
    if (opc == 1)
        {
        rSoma = v1 + v2;
		rSub = v1 - v2;
		rMul = v1 * v2;
		rDiv = v1 / v2;		
    	txt = "SOMA";
  		}
    	
    if (opc == 2)
    	{
    	rSoma = v1 + v2;
		rSub = v1 - v2;
		rMul = v1 * v2;
		rDiv = v1 / v2;
    	txt = "SUBTRA��O";
  		}
  		
  	if (opc == 3)
    	{
    	rSoma = v1 + v2;
		rSub = v1 - v2;
		rMul = v1 * v2;
		rDiv = v1 / v2;	
    	txt = "MULTIPLICA��O";
  		}
	
	if (opc == 4)
    	{
    	rSoma = v1 + v2;
		rSub = v1 - v2;
		rMul = v1 * v2;
		rDiv = v1 / v2;	
    	txt = "DIVIS�O";
  		}

	
    switch (opc)
    {
    	
    case 1:
    	op = 0;
        printf("\n\t ******* Escolhido a %s", txt);
        printf(" o resultado � : %.2f *******\n\n", rSoma);
        printf("*******Outras op��es*******\n\n");
        printf("     SUBTRA��O o resultado � : %.2f\n", rSub);
        printf(" MULTIPLICA��O o resultado � : %.2f\n", rMul);
        printf("       DIVIS�O o resultado � : %.2f\n", rDiv);
        
        break;

    case 2:
    	op = 0;
        printf("\n\t ******* Escolhido a %s", txt);
        printf(" SUBTRA��O o resultado � : %.2f\n\n", rSub);        
        printf("*******Outras op��es*******\n\n");
        printf("          SOMA o resultado � : %.2f \n", rSoma);
        printf(" MULTIPLICA��O o resultado � : %.2f\n", rMul);
        printf("       DIVIS�O o resultado � : %.2f\n", rDiv);
        break;
		
	case 3:
		op = 0;
        printf("\n\t ******* Escolhido a %s", txt);
        printf(" o resultado � : %.2f\n\n", rMul);        
        printf("*******Outras op��es*******\n\n");
        printf("      SOMA o resultado � : %.2f \n", rSoma);
        printf(" SUBTRA��O o resultado � : %.2f\n", rSub);
        printf("   DIVIS�O o resultado � : %.2f\n", rDiv);
        break;
		
	case 4:;
		op = 0;
        printf("\n\t ******* Escolhido a %s", txt);
        printf(" o resultado � : %.2f\n\n", rDiv);                
        printf("*******Outras op��es*******\n\n");
        printf("         SOMA o resultado � : %.2f \n", rSoma);
        printf("     SUBTRA��O o resultado � : %.2f\n", rSub);
        printf(" MULTIPLICA��O o resultado � : %.2f\n", rMul);
        
        break;		    
    
    default:
    	op = 1;
    	printf("\n\t******OP��O ESCOLHIDA INV�LIDA******\n\n");
        break;
    } 
	
}

	return 0;    
}
