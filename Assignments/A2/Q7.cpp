#include<iostream>

int main()
{
    int n;
    printf("n: ");
    scanf(" %d", &n);
    int k=1;
    for(int i=0; i<n; i++)
    {
        printf("%d", k);
        k++;
        for(int j=0; j<i; j++, k++)
            printf("*%d", k);
        std::cout<<'\n';
    }
    k = k-n;
    int j=0;
    for(int i=n-1; i>=0; i--, j++)
    {
        int tmp = k;
        printf("%d", k);
        k++;
        for(int j=0; j<i; j++, k++)
            printf("*%d", k);
        k = tmp-n+j+1;
        std::cout<<'\n';
    }
    return 0;
}