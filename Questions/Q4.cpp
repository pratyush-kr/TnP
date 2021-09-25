#include<iostream>

int main()
{
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            for(int j=0; j<n; j++)
                printf("%d", i+1);
            printf("%d", i+2);
        }
        else
        {
            printf("%d", i+2);
            for(int j=0; j<n; j++)
                printf("%d", i+1);
        }
        printf("\n");
    }
    return 0;
}