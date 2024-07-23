#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x[3];
    for(int i = 0; i <= 3; i++){
        x[i] = i;
    }
    for(int i = 0; i <= 3; i++){
        printf("\n%d",x[i]);
    }
    return 0;
}
