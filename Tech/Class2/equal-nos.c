#include<stdio.h>

int main()
{
    int a = 7, b = 7;
    if(!(a^b))
        printf("Equal\n");
    else
        printf("Not Equal\n");
    return 0;
}