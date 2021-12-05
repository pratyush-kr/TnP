#include<iostream>

int main()
{
    int n;
    printf("n: ");
    scanf(" %d", &n);
    for(int i=0; i<n-1; i++)
    {
        if(i > 0) printf("%*c", i, ' ');
        printf("*");
        printf("%*c", 2*(n-i)-3, ' ');
        printf("*\n");
    }
    printf("%*c*\n", n-1, ' ');
    int k=0;
    for(int i=n-1; i>0; i--)
    {
        if(i > 1) printf("%*c", i-1, ' ');
        printf("*");
        printf("%*c", n-i+k, ' ');
        k++;
        printf("*\n");
    }
    return 0;
}