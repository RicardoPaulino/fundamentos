#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x[5], n = 1;

    for(int i = 0; i < 5; i++){
        x[i] = n * 2 + i;
        n++;
    }
    for(int i = 0; i < 5; i++){
        printf("x[%d]: %d\n",i,x[i]);
    }
    return 0;
}
