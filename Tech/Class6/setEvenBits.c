#include<stdio.h>

int setBit(int n)
{
    int c=0, i, res=0;
    i = n;
    while(i > 0)
    {
        if(c%2 == 1)
            res = res | (1<<c);
        c++;
        i = i>>1;
    }
    return n|res;
}

int main()
{
    int n, m;
    printf("n: ");
    scanf(" %d", &n);
    m = setBit(n);
    printf("m: %d\n", m);
    return 0;
}