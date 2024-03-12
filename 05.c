#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5];
    int vet[5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Informe o valor para MAT[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 5 ; i++)
    {
        vet[i] = 0;
        for (int j = 0; j < 5; j++)
        {
            vet[i] += mat[i][j];
        }
    }

    for (int i = 0; i < 5 ; i++)
    {
        printf("[");
        for (int j = 0; j < 5; j++)
        {
            printf("%2d", mat[i][j]);
            if (j < 4) 
            {
                printf("\t");
            }
        }
        printf(" ] -> [%d]\n", vet[i]);
    }

    return 0;
}