#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    float media, a1, a2;
 	setlocale(LC_ALL, "Portuguese");
    printf("\n \t Media\n\n");
    
    printf("Digite a nota 1 Ex: 5.5\n");
    scanf("%f", &a1);

    printf("Digite a nota 2 Ex: 5.5\n");
    scanf("%f", &a2);

    media = (a1 + a2) / 2;
    if (media >= 7)
    {
        printf("\n Sua media é: %.2f", media);
        printf(" Voce esta APROVADO!!");
    } else
    {
        printf("\n Sua media é: %.2f", media);
        printf(" Infelizmente REPROVADO" );
    }
    
    
    return 0;
}
