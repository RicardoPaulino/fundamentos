#include <stdio.h>
int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("x = %d\n", x);
    printf("&x = %p\n",(void *) &x);
    printf("p = %p\n", (void *) p);

    return 0;
}
