#include <stdio.h>
#include <math.h>

#define LIMITE 30

int main(){
    float peso, altura, imc;
    printf("\nQual o seu peso e altura?\n");
    scanf("%f %f",&peso, &altura);
    imc = peso / (altura * altura);
    printf("\n Seu i.m.c eh %.1f",imc);
    if(imc <= LIMITE) printf("\nvoce nao esta obeso!");
    else printf("\nVoce esta obeso!");
    getchar();
    return 0;
}