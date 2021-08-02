#include<iostream>

int main()
{
    int a = 4, b = 15, c = 10;
    int max = a;
    //max
    (max<b) && (max=b);
    (max<c) && (max=c);
    printf("max = %d\n", max);
    //min
    int min = a;
    (min>b) && (min=b);
    (min>c) && (min=c);
    printf("min = %d\n", min);
    return 0;
}