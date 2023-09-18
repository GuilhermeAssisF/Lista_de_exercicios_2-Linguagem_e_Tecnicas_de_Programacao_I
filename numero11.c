#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    int minX = 1001, minY = 1001; 
    int maxX = -1001, maxY = -1001; 

    for (int i = 0; i < n; i++) {
        int Xi, Xf, Yi, Yf;
        scanf("%d %d %d %d", &Xi, &Xf, &Yi, &Yf);

        // Atualiza os valores mínimos e máximos
        if (Xi < minX) minX = Xi;
        if (Xf > maxX) maxX = Xf;
        if (Yi < minY) minY = Yi;
        if (Yf > maxY) maxY = Yf;
    }

    // área total
    int area = (maxX - minX) * (maxY - minY);

    printf("%d\n", area);

    return 0;
}
