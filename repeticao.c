#include <stdio.h>.
#include <string.h>
main()
{
    char nome[30];
    int indice, tamanho =0, cont = 0;

    printf("\n digite um nome: ");
    scanf("%s", &nome);

    tamanho = strlen(nome);


    for ( size_t indice = 1; indice <= tamanho-1; indice++)
        {
        
        if(nome[indice] == 'a' || nome[indice] == 'A')  
            cont++;    
           
        }

        printf("\n O nome %s ", (nome));
        printf("\n tem %d letra a ", &cont);

        
    }
    