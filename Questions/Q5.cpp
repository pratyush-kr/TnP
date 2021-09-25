#include<iostream>

long factorial(int num)
{
    long fact = 1;
    for(int i=1; i<=num; i++)
        fact = fact*i;
    return fact;
}

int main()
{
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    for(int i=0; i<n; i++)
    {
        if(i != n-1) printf("%*c", n-i-1, ' ');
        for(int j=0; j<i+1; j++)
            printf("%ld ", factorial(i)/(factorial(j)*factorial(i-j)));
        printf("\n");
    }
    return 0;
}