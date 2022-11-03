#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	int lin, col,tab,esc;
	int mat[3][3];
	printf("\n\n\tAVALIAÇÃO: >>> AVA2\n");
	printf("\t    ALUNO: >>> WILLIAN BORGES DE MELLO\n");
	printf("\tMATRÍCULA: >>> 20224301080\n");
	printf("\t    TURMA: >>> 2022.04 \n\n");
	printf("\n\n\t\tFazer a Matriz Automaticamente ou digitar manualmente?\n\n");
	printf("  Automático -> 1 \n ");
	printf("Manualmente -> 2 \n ");
	scanf("%i", &esc);
	
	if(esc == 2){
			
	for(lin =0;lin<=2;lin++)
	{
			
		for(col=0;col<=2;col++)
		{
			printf("Digite ELEMENTO da linha %d, coluna %d da matriz:", lin+1,col+1);
			
			//aqui no scanf preenchemo a matriz
			scanf("%d", &mat[lin][col]);
		}
	}
	
	//imprimindo a matriz
	printf("\n\n\t\t** Matriz **\n");
	for(lin=0;lin<=2;lin++)
	{
		printf("\n");
		for(col=0;col<=2;col++)
		{
			printf("[");
			printf("%d]\t", mat[lin][col]);
			
				
		}
	}
	
	for(lin=0;lin<=2;lin++)
	for(col=0;col<=2;col++)
	mat[lin][col]=mat[lin][col] *5;
	
	printf("\n\n\t** Matriz multiplicada por 5 **\n");
	for(lin=0;lin<=2;lin++){
		printf("\n");
		for(col=0;col<=2;col++){
			printf("[");
			printf("%d]\t", mat[lin][col]);
		}
	}
	
}

if(esc == 1){

		for(lin =0;lin<=2;lin++)
	{
			
		for(col=0;col<=2;col++)
		{
		int l, c;
		l= l+1;
		c= c+1;
			
			mat[lin][col] = l, c;
		}
	}
	
	//imprimindo a matriz
	printf("\n\n\t\t** Matriz **\n");
	for(lin=0;lin<=2;lin++)
	{
		printf("\n");
		for(col=0;col<=2;col++)
		{
			printf("[");
			printf("%d]\t", mat[lin][col]);
			
				
		}
	}
	
	for(lin=0;lin<=2;lin++)
	for(col=0;col<=2;col++)
	mat[lin][col]=mat[lin][col] *5;
	
	printf("\n\n\t** Matriz multiplicada por 5 **\n");
	for(lin=0;lin<=2;lin++){
		printf("\n");
		for(col=0;col<=2;col++){
			printf("[");
			printf("%d]\t", mat[lin][col]);
		}
	}
	
}
	
	
}
