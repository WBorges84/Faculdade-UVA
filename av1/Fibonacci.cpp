#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ALUNO : WILLIAN BORGES DE MELLO
//TURMA : 
int main()
{
    unsigned long long int v1 = 34, v2 = 55, next, cont,c, termo =1;
    setlocale(LC_ALL, "Portuguese");
    printf("\n\t******* Fibonacci ******* \n\n");
    printf("\t Digite a quantidade requirida. \n");
     
    scanf("%d", &cont);
    c = 0;
  
    printf("[*-*] Comešando o Calculo: [*-*]\n\n");    
    printf("%d\n", v1);
    printf("%d\n", v2);
    
while(c < cont)
{
   next = v1 + v2;
   printf("Termo: %d ", termo);
   printf(" <=> ");
   printf("%d\n", next);
   c = c + 1;
   v1 = v2;
   v2 = next;
   termo = termo +1; 
}


    return 0;
} 

