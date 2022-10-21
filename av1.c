#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float v1, v2,soma, subtracao,multiplicacao,divisao, result;
    int opc;
    char *txt;
    setlocale(LC_ALL, "Portugues");
    printf("\n\t Calculadora AV1");
    printf("\n Digite o primeiro valor a ser calculado\n");
    scanf("%f", &v1);
    printf("\n Digite o segundo valor a ser calculado\n");
    scanf("%f", &v2);
    //system("cls");
    printf("\n O que deseja fazer com os valores digitados?\n\n");
    printf("Opcao 1 - SOMA \n");
    printf("Opcao 2 - SUBTRACAO \n");
    printf("Opcao 3 - MuLTIPLICACAO \n");
    printf("Opcao 4 - DIVISAO \n\n");
    scanf("%d", opc);

    if (opc == 1)
        result = v1 + v2;
        txt = "SOMA";  
    
    if (opc == 2)
        result = v1 - v2;
         

    if (opc == 3)
        result = v1 * v2;
        

    if (opc == 4)
        result = v1 / v2;
        
    printf("Escolhido e o resultado é : %f", v1);   
    //printf("Escolhido %s e o resultado é : %.1f",txt, result);         
       
}
