#include<iostream>

int main()
{
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    int x=1;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0)
        { 
            printf("%d", x);
            x++; 
            for(int j=1; j<=i; j++)
                printf("*%d", x),
                x++;
            printf("\n");
        }
        else
        {
            int tmp;
            tmp = x+i;
            printf("%d", tmp);
            tmp--;
            for(int j=1; j<=i; j++)
                printf("*%d", tmp),
                tmp--;
            printf("\n");
            x += i+1;
        }
    }
    return 0;
}