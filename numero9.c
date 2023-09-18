#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizLib.h"

int main()
{
    int m[100][100], n[100][100], mult[100][100];
    int i,j;

    printf("[Digite os valores da matriz 1]\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++){
            printf("Posicao [%d x %d]: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("[Digite os valores da matriz 2]\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++){
            printf("Posicao [%d x %d]: ", i+1, j+1);
            scanf("%d", &n[i][j]);
        }
    }

    printf("\n[Matriz 1]\n");
    printMatriz(m,2,3);

    printf("\n[Matriz 2]\n");
    printMatriz(n,3,2);

    for(j=0; j < 3; j++){
        mult[0][0] += m[0][j] * n[j][0];
    }

    for(j=0; j < 3; j++){
        mult[0][1] += m[0][j] * n[j][1];
    }

    for(j=0; j < 3; j++){
        mult[1][0] += m[1][j] * n[j][0];
    }

    for(j=0; j < 3; j++){
        mult[1][1] += m[1][j] * n[j][1];
    }

    printf("\n*RESULTADO*\n");
    printMatriz(mult, 2, 2);

    
    return 0;
}
