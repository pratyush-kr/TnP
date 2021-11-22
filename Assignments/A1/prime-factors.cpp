#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define MAX_SIZE 1000005

vector<int> SieveOfEratosthense()
{
    vector<int> primes;
    bool isPrime[MAX_SIZE];
    memset(isPrime, true, sizeof(isPrime));
    for(int p=2; p*p < MAX_SIZE; p++)
    {
        if(isPrime[p] == true)
            for(int i=p*p; i<=MAX_SIZE; i+=p)
                isPrime[i] = false;
    }
    for(int p=2; p<MAX_SIZE; p++)
        if(isPrime[p])
            primes.push_back(p);
    return primes;
}

int main()
{
    vector<int> primes = SieveOfEratosthense();
    vector<int> primeFactor;
    int n;
    cout<<"n: ";
    cin>>n;
    for(int i=0; i*i<=n; i++)
        if(n%primes[i] == 0)
            primeFactor.push_back(primes[i]);
    for(auto factor : primeFactor)
        cout<<factor<<' ';
    cout<<'\n';
    return 0;
}