#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

int main()
{
    int matriz[100][100],i,j,linha,coluna;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linha);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &coluna);

    geraMatriz(matriz, linha, coluna);
    printMatriz(matriz, linha, coluna);

    j = linha;

    for(i = 0;i<linha;i++){
        j = j - 1;
        printf("%d\n", matriz[i][j]);
    }
        

    return 0;
}
