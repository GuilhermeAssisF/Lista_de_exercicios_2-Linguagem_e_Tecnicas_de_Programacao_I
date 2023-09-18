#include <stdio.h>
#include <stdlib.h>
#include "matrizLib.h"

int main()
{
    int matriz[100][100],i,j, x, igual = 0;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &i);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &j);

    geraMatriz(matriz, i, j);
    printMatriz(matriz,i,j);

    printf("Informe qual valor voce quer conferir se tem na matriz: ");
    scanf("%d", &x);

    for(i=0;i<100;i++)
		for(j=0;j<100;j++)
		   if(matriz[i][j] == x){
                igual += 1;
           }

    printf("Ha %d numeros igaul a %d na matriz", igual, x);

    return 0;
}
