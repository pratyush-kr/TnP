#include<stdio.h>
/*
single # means stringy
double ## means concatenate
*/
#define fun m##a##i##n
#define display(x) #x
#define dis(x, y) x##y
int fun()
{
    printf("Hello\n");
    printf("%d",dis(10, 20));
    return 0;
}