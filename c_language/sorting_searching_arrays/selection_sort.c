#include <stdio.h>

void selection_sort(int *v, int N)
{
    int i, j, menor, troca;
    for (i = 0; i < N - 1; i++)
    {
        menor = i;
        for(j = i + 1; j < N; j++){
            if(v[j] < v[menor])
            menor = j;
        }
        if(i != menor){
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }
}
void main()
{
    int numbers[5] = {90, 69, 88, 5, 63};

    printf("Array nao ordenado\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n\n");

    selection_sort(numbers, 5);

    printf("Array ordenado\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n\n");
}