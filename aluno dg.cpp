#include <stdio.h>

// Descri��o : Opera��o com For 

// Autor(a) : Davison Gladstone

// Data atual : 25/11/2022


int main()

{
   printf("*************");
   printf("\n** Bem vindo ao nosso verificador de n�meros ***\n");
   printf("******* Pares e Impares ******\n");
   printf("*************");
   
   int inicial, final, contador, qtd_pares = 0;
   
   printf("\nDigite o n�mero inicial\n");
   scanf("%d", &inicial);
   
   printf("\nDigite o n�mero final\n");
   scanf("%d", &final);
   
  while(final <= inicial);{
      printf("digite um valor valido maior que o valor inicial %d", inicial);
      printf("\ndigite o numero final\n");
      scanf("%d", &final);
  }
  
  
  
  for(contador = inicial; contador <= final; contador++){
   } 
        if(contador%2==0){
       printf("o numero %d e PAR!\n", contador);
       qtd_pares++;
       }else{
            printf("o numero %d e IMPAR!\n", contador);
       }
       
       printf("A quantidade de numeros pares\n e %d", qtd_pares);
       return(0);
       
       
}
