#include<stdio.h>

int i = 1;

int main()
{
    if(i == 101)
        return 0;
    printf("%d\n", i++);
    main();
    return 0;
}