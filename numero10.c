#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizLib.h"

int main()
{
    int mapa[1000][300], x, y, n, i, j, a, resultado;

    printf("Digite o numero de raios que cairam(entre 2 e 300.000): ");
    scanf("%d", &n);

    if (n > 2 && n < 300.000)
    {
        for (a = 0; a < n; a++)
        {
            x = rand() % 1000;
            y = rand() % 300;
            mapa[x][y] += 1;
        }
    }

    else
    {
        printf("Valor de raios invalido");
        exit;
    }

    for (x = 0; x < 1000; x++)
        for (y = 0; y < 300; y++)
            if (mapa[x][y] > 1)
                printf("na posicao X: %d Y: %d", x, y);
                resultado += 1;
    

    if (resultado >= 1)
    {
        printf("1");
    }

    else if (resultado == 0)
    {
        printf("0");
    }

    return 0;
}
