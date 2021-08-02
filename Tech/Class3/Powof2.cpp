#include<iostream>

int main()
{
    int n = 4;
    std::cout<<(n && !(n & (n-1)))<<'\n';
    return 0;
}