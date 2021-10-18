#include<iostream>

int main()
{
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    for(int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
            if(i == n-1 || j == i || j== 2*n-2-i)
    }
    return 0;
}