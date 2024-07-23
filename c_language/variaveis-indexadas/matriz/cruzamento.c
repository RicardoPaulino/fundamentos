#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, n, h, v, cruza[10][10];
    printf("Mapa de acidentes:\n\nNumero de acidentes: ");

    for(i = 0; i <=9; i++){
        for(j = 0; j <= 9; j++)
            cruza[i][j] = 0;
    }
    scanf("%d",&n);

    for(i = 1; i <=n; i++){
        printf("\tCruzamento: "); scanf("%d%d",&h, &v);
        if(h >= 0 && h <= 9 && v>=0 && v<=9) 
            cruza[h][v]++;
    }
    printf("\n\n");
    for(i = 0; i <=9; i++){
        for(j = 0; j <= 9; j++)
            printf("%3d",cruza[i][j]);
        printf("\n\n");
    }
    return 0;
}
