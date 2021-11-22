#include<iostream>
#include<map>
#include<cstring>
#include<vector>

using namespace std;

#define MAX_SIZE 1000005

vector<int> SieveOfEratosthenes()
{
    bool isPrime[MAX_SIZE] = {true};
    memset(isPrime, true, sizeof(isPrime));
    vector<int> primes;
    for(int p=2; p*p < MAX_SIZE; p++)
    {
        if(isPrime[p] == true)
            for(int i=p*p; i<MAX_SIZE; i+=p)
                isPrime[i] = false;
    }
    for(int p=2; p<MAX_SIZE; p++)
        if(isPrime[p] == true)
            primes.push_back(p);
    return primes;
}

int main()
{
    vector<int> primes = SieveOfEratosthenes();
    int n;
    while(1)
    {
        cout<<"n: ";
        cin>>n;
        printf("prime(%d) = %d\n", n, primes[n-1]);
    }
    return 0;
}