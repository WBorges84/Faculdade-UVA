#include <stdio.h>

main()
{
    int lin, col, tab;
    int mat[4][4];
    for (lin = 0; lin <= 3; lin++ )
    {
        for (col = 0; col <=3 ; col++)
        {
            printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ", lin+1, col+1);
            //aqui o scan preenche a matriz
            scanf("%d", &mat[lin][col]);
        
        }

        
    }

    //Imprimindo MAtriz

    printf("Matriz \n");
    for (lin= 0; lin <= 3; lin++)
    {
        for (col = 0; col <=3 ; col++)
        {
            printf("%d\t", mat[lin][col]);
            printf("\n\n");
            
        }
        
    }
    
    

}