#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

int main()
{
    int matriz[100][100],i,j, maior = 0;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &i);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &j);

    geraMatriz(matriz, i, j);
    printMatriz(matriz,i,j);

    for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		   if(matriz[i][j] > maior){
                maior = matriz[i][j];
           }

    printf("O maior valor da matriz e: %d", maior);

    return 0;
}
