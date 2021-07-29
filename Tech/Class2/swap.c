#include <stdio.h>

int main()
{
    int x = 5, y = 4;
    printf("x= %d\ny= %d", x, y);
    x ^= y ^= x ^= y;
    printf("\nx= %d\ny= %d", x, y);
    return 0;
}