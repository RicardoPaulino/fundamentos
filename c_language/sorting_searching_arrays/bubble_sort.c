#include <stdio.h>

void bubble_sort(int *v, int N){
    int i, continua, aux;
    continua = 0;
    do{
        for(i = 0; i < N-1; i++){
            if(v[i] > v[i+1]){
                aux = v[i+1];
                v[i + 1] = v[i];
                v[i] = aux;
                continua = i;
            }
        }
    }while(continua != 0);
}

void main()
{
    int numbers[5] = {25, 47, 88, 5, 63};

    printf("Array nao ordenado\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n\n");

    bubble_sort(numbers, 5);

    printf("Array ordenado\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n\n");

}