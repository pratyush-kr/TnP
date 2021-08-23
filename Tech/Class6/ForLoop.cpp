#include<iostream>

int main()
{
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    for(int i=0; i<n; i++)
        std::cout<<i+1<<": Hello, World\n";
    return 0;
}