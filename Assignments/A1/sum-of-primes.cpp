#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define MAX 1000005

vector<int> SieveOfEratostohense()
{
    vector<int> primes;
    bool isPrime[MAX] = {true};
    memset(isPrime, true, sizeof(isPrime));
    for(int p=2; p*p<MAX; p++)
    {
        if(isPrime[p] == true)
            for(int i=p*p; i<=MAX; i+=p)
                isPrime[i] = false;
    }
    for(int p=2; p<MAX; p++)
        if(isPrime[p] == true)
            primes.push_back(p);
    return primes;
}

int main()
{
    int num;
    vector<int> primes = SieveOfEratostohense(), factors;
    while(1)
    {
        cout<<"Number: ";
        cin>>num;
        for(int i=0; primes[i]*primes[i]<=num; i++)
        {
            if(num%primes[i] == 0)
                factors.push_back(primes[i]);
        }
        cout<<factors.size()<<'\n';
        int sum = 0;
        for(auto factor : factors)
            sum += factor;
        printf("Sum = %d\n", sum);
    }
    return 0;
}