#include <stdio.h>
 main()
{
    float var1, var2, result;
    int opc;

    printf("Bem vindo a Calculador \n\n");
    printf("Opcao 1 - SOMA \n");
    printf("Opcao 2 - SUBTRACAO \n");
    printf("Opcao 3 - MuLTIPLICACAO \n");
    printf("Opcao 4 - dIVISAO \n\n");

    printf("ESCOLHA UmA OpCAO dE cALCULO \n");

    scanf("%d", &opc);

    printf("Digite o promeiro valor: \n ");
    scanf("%f", &var1);

    printf("Digite o segundo valor: \n ");
    scanf("%f", &var2);

    if (opc == 1)
    result = var1 + var2;

    if (opc == 2)
    result = var1 - var2;

    if (opc == 3)
    result = var1 * var2;

    if (opc == 4)
    result = var1 / var2;

    printf("O resultado e = %f", result);



}
