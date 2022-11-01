#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

setlocale(LC_ALL,"Portuguese");

int num1,num2;

printf("\nInforme os números: ");
scanf ("%i""%i",&num1,&num2);

if (num1 % 2 == 0){
    printf ("\nO número %i é par e",num1);
}else {
    printf("\nO número %i é impar e",num1);
}
if (num1>num2){
    printf (" é o número é o maior");
}else {
    printf(" é o número é o menor");
}



if (num2 % 2 == 0){
    printf ("\nO número %i é par e",num2);
}else {
    printf("\nO número %i é impar e"),num2;
}
if (num2>num1){
    printf (" é o número é o maior");
}else {
    printf(" é o número é o menor");
}
