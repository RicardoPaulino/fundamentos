/**
 * Problema: Dado uma distancia e o total em litros de combustivel
 *           gasto por um automovel para percorre-la, informe o consumo medio.
 */
#include <stdio.h>

int main()
{
    double distancia, combustivel, media;
    printf("Digite a distancia percorrida e quantidade de combustivel consumido\n");
    scanf("%lf %lf",&distancia, &combustivel);
    media = distancia / combustivel;
    printf("\nmedia %.4lf km/l\n",media);
    return 0;
}