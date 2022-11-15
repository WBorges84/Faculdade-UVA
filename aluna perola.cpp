#include <stdio.h>
int main(){
	int opcao, n1, n2;
	
	do {
		printf("Menu Calculadora\n");
		printf("1 - Soma\n");
		printf("2 - Subtração\n");
		printf("3 - Multiplicação\n");
		printf("4 - Divisão\n");
		printf("0 - Sair\n");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1 : printf("Digite o primeiro numero\n");
					 scanf("%d",&n1);
					 printf("Digite o segundo numero\n");
					 scanf("%d",&n2);
					 printf("soma = %d \n", n1+n2);
					 break;
					 
			case 2 : printf("Digite o primeiro numero\n");
					 scanf("%d",&n1);
					 printf("Digite o segundo numero\n");
					 scanf("%d",&n2);
					 printf("subtracao = %d \n", n1-n2);
					 break;

			case 3 : printf("Digite o primeiro numero\n");
					 scanf("%d",&n1);
					 printf("Digite o segundo numero\n");
					 scanf("%d",&n2);
					 printf("multiplicacao = %d \n", n1*n2);
					 break;
					 
			case 4 : printf("Digite o primeiro numero\n");
					 scanf("%d",&n1);
					 printf("Digite o segundo numero\n");
					 scanf("%d",&n2);
					 printf("divisao = %f \n", n1/n2);
					 break;
		}
	} while (opcao != 0);
}
