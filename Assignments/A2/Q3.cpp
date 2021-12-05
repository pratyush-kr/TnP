#include<iostream>

int main()
{
    int n, s;
    printf("n: ");
    scanf(" %d", &n);
    printf("s: ");
    scanf(" %d", &s);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
            printf("%d", s);
        s++;
        printf("\n");
    }
    s--;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i+1; j++)
            printf("%d", s);
        s--;
        printf("\n");
    }
    return 0;
}