#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizLib.h"

int main()
{
    srand(time(NULL));
    int mtr_um[100][100], mtr_dois[100][100], mtr_final[100][100];
    int linha, coluna, opc, i, j;

    // Leitura linhas e colunas
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linha);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &coluna);

    // Geração das matrizes
    for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
		   mtr_um[i][j]=(rand()%30)+50;

    for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
		   mtr_dois[i][j]=rand()%50;
    

    // Exibição das matrizes
    printf("\nMatriz 1\n");
    printMatriz(mtr_um, linha, coluna);
    printf("\nMatriz 2\n");
    printMatriz(mtr_dois, linha, coluna);

    // Escolha do usuário
    printf("Para somar as duas matrizes digite(1), para subtrair digite (2) e para ter uma constante digite(3): ");
    scanf("%d", &opc);

    // Soma
    if (opc == 1)
    {
        printf("\nVoce escolheu soma\n");
        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < coluna; j++)
            {
                mtr_final[i][j] = mtr_um[i][j] + mtr_dois[i][j];
            }
        }
        printMatriz(mtr_final, linha, coluna);
    }

    // Subtração
    else if (opc == 2)
    {
        printf("\nVoce escolheu subtrair\n");
        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < coluna; j++)
            {
                mtr_final[i][j] = mtr_um[i][j] - mtr_dois[i][j];
            }
        }
        printMatriz(mtr_final, linha, coluna);
    }

    // Constante
    else if (opc == 3)
    {
        printf("\nVoce escolheu subtrair\n");
        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < coluna; j++)
            {
                mtr_final[i][j] = mtr_um[i][j] * mtr_dois[i][j];
            }
        }
        printMatriz(mtr_final, linha, coluna);
    }

    // valor inválido
    else
    {
        printf("O numero que voce digitou e invalido");
    }

    return 0;
}
