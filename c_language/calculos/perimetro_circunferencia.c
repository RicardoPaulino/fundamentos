#include <stdio.h>
#define PI 3.1415

int main(){
    double raio, perimetro;
    printf("Digito o valor do raio.\n");
    scanf("%lf",&raio);
    perimetro = 2*PI*raio;
    printf("\nO perimetro da circunferncia eh %.4f",perimetro);
    return 0;
}