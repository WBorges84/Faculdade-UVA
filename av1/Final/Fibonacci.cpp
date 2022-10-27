#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ALUNO : WILLIAN BORGES DE MELLO
//Matricula : 20224301080 
//TURMA : 2022.4 
int main()
{
    unsigned long long int v1 = 34, v2 = 55, next, cont,c;
    setlocale(LC_ALL, "Portuguese");
    printf("\n\t******* Fibonacci ******* \n\n");
    printf("\t Digite a quantidade requirida. \n");
    scanf("%d", &cont);
    c = 0;
    printf("[*-*] Começando o Calculo: [*-*]\n\n");    
    printf("%d\n", v1);
    printf("%d\n", v2);
    
while(c < cont)
{
   next = v1 + v2;
   printf("%d\n", next);
   c = c + 1;
   v1 = v2;
   v2 = next; 
}


    return 0;
} 

