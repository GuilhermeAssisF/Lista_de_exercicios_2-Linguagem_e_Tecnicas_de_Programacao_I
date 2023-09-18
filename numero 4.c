#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

int main()
{
    int matriz[100][100],i,j, l=0;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &i);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &j);

    geraMatriz(matriz, i, j);
    printMatriz(matriz,i,j);

    for(l;l<i;l++)
        printf("O numero mostrado na %d\n", matriz[l][l]);
            
    return 0;
}
