#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void escrevaNome();

int main()
{
	setLocale(LC_ALL, "");	
	
	escrevaNome();
	
	
	return 0;
	
}


void escrevaNome(){
	printf("O emu nome é Willian\n");
	return 0;
}