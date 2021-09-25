#include<iostream>

int main()
{
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    int x = 1, y=n*n+1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
            printf("  ");
        printf("%d", x++);
        for(int j=1; j<n-i; j++)
            printf("*%d", x++);
        int tmp = y;
        for(int j=0; j<n-i; j++)
            printf("*%d", y++);
        y = tmp;
        y -= n-i-1;
        printf("\n");
    }
    return 0;
}