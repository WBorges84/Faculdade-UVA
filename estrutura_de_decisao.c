#include <stdio.h>
main
()
{
    int x = 0, y =0 , z =0;
    printf("Programa para verificacao de valores \n\n\n");

    printf("DIgite o valo de X \n");
    scanf("%d", &x);

    printf("Digite o valor de Y \n");
    scanf("%d", &y);

    printf("Digite o valor de Z \n");
    scanf("%d", &z);

    if (x == 0 && y == 0 && z ==0)
    printf("Nao pode haver numero zero");

    else if ((x == y) && (x == z) )
    printf("Todos os numeros sao iguais");

    else if ((x == y) || (x == z) || ( y == z) )
    printf("Apenas dois numeros sao iguais");

    else
        printf("todos os numeros sao diferentes");
    {
        /* code */
    }
    
    {
        /* code */
    }
    
    {
        /* code */
    }
    


}