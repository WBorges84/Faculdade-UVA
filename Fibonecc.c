#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    unsigned long long int v1 = 1, v2 = 1, next, cont,c;
    printf("Finebacc \n");
    printf("%d ", v1);
    printf("%d ", v2);
    cont = 2;
    c = 2;
    
while(c < 46)
{
   next = v1 + v2;
   printf("%d *", next);
   c = c + 1;
   v1 = v2;
   v2 = next; 
}

switch (expression)
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}


    return 0;
} 

