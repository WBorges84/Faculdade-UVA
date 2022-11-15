#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int main(void){
	char nome[20];
	int cpf;
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite seu CPF: ");
	scanf("%i", &cpf);
	
	printf("Seu nome: %s e seu CPF: %d", nome, cpf);
	
	
	
return 0;	
	
	
}
