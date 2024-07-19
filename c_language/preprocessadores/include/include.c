#include <stdio.h>
#include "mymath.h"

int main()
{
    int a = 2, b = 3, total;
    total = soma(a,b);
    printf("%d\n\n",total);
    return 0;
}

// implementação do mymath.h
int soma(int x, int y){
    return x + y;
}