#include <stdio.h>

int main()
{
    float media, a1, a2;
    printf("\n \t Media");
    printf("Digite a nota 1\n");
    scanf("%f", &a1);

    printf("Digite a nota 2 \n");
    scanf("%f", &a2);

    media = (a1 + a2) / 2;
    if (media >= 7)
    {
        printf("\n Sua media eh %f", media , " Voce esta APROVADO!!");
    } else
    {
        printf("\n Sua media eh: %f", media, " Infelizmente REPROVADO" );
    }
    
    
    return 0;
}
