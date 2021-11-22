#include<iostream>
#include<map>

using namespace std;
map<long long unsigned int, long long unsigned int> mp;//{n, nth fib}

long long unsigned int fibonacci(long long unsigned int n)
{
    if(mp[n] != 0)
        return mp[n];
    if(n == 1)
        return 0;
    else if(n == 2 || n == 3)
        return 1;
    else
    {
        int a = fibonacci(n-1);
        mp[n-1] = a;
        int b = fibonacci(n-2);
        mp[n-2] = b;
        mp[n] = a+b;
    }
    return mp[n];
}

int main()
{
    long long unsigned int n;
    cin>>n;
    printf("fibonacci(%lld) = %lld\n", n, fibonacci(n));
    return 0;
}