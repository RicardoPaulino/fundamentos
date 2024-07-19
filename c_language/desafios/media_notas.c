#include <stdio.h>

int main(){
    float media, n1, n2;
    printf("Digite duas notas\n");
    scanf("%f %f",&n1, &n2);
    media = (n1 + n2) / 2;
    printf("Sua media eh %.2f\n",media);
    return 0;
}