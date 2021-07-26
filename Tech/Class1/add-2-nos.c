#include<stdio.h>

//int printf(const char *c, ...)

int main()
{
    int x = 5;
    int y = 7;
    float f = 7.421;
    //printf("%*f\n", 2, f);
    int z = printf("%*c%*c", x,' ', y,' ');
    printf("sum = %d\n", z);
    return 0;
}