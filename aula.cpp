#include <stdio.h>
#include <locale.h>
int main()
{

float n1, n2, resultado1, resultado2, resultado3, resultado4;
setlocale(LC_ALL,"Portuguese");

printf("\nEscreva um número:");
scanf("%f", &n1);

printf("\nEscreva mais um número:");
scanf("%f", &n2);

resultado1= n1 + n2;
resultado2= n1 - n2;
resultado3= n1 * n2;
resultado4= n1 / n2;

printf("\n%f + %f = %f", n1, n2, resultado1);
printf("\n%f - %f = %f", n1, n2, resultado2);
printf("\n%f * %f = %f", n1, n2, resultado3);
printf("\n%f / %f = %f", n1, n2, resultado4);

return 0;


}
