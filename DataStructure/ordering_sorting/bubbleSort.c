#include <stdio.h>
#include <stdlib.h>

void main(){
    int values[] = {5, 3, 8, 6, 2,9,11,1,4,7,10};
    int length = sizeof(values) / sizeof(values[0]);
    int temp, continueFlag = 0, i;

    printf("Vetor sem ordenacao\n");
    for(i = 0; i < length; i++){
        printf("%d ", values[i]);
    }
    printf("\n");

    do{
        continueFlag = 0;
        for(i = 0; i < length - 1; i++){
            if(values[i] > values[i + 1]){
                temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                continueFlag = i;
            }
        }
    }while(continueFlag != 0);

    printf("\n");
    printf("Vetor ordenado\n");
    for(i = 0; i < length; i++){
        printf("%d ", values[i]);
    }
}