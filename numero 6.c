#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

int main()
{
    int mUm[100][100],mDois[100][100], mSoma[100][100] ,i,j,linha,coluna;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linha);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &coluna);

    geraMatriz(mUm, linha, coluna);
    printMatriz(mUm, linha, coluna);

    printf("\n\n");

    srand(time(NULL));
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
		   mDois[i][j]=(rand()%50) + 4;

    printMatriz(mDois, linha, coluna);

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            mSoma[i][j] = mUm[i][j] + mDois[i][j];
        }
    }

    printf("MATRIZ REPRESENTANDO A SOMA DAS MATRIZES\n");
    printMatriz(mSoma,linha,coluna);
    

    return 0;
}
