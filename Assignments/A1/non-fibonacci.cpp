#include<iostream>
#include<map>

using namespace std;

map<int, int> mp;

int fibonnaci(int n)
{
    if(mp[n] != 0)
        return mp[n];
    if(n == 1)
        return 0;
    if(n <= 3)
        return 1;
    else
        mp[n] = fibonnaci(n-1) + fibonnaci(n-2);
    return mp[n];
}

int main()
{
    mp[1] = 0;
    mp[2] = 1;
    cout<<fibonnaci(20)<<'\n';
    int n;
    cin>>n;
    int i=0,x=1;
    while(i<=n)
    {
        if(mp[x]==0)
        {
            i++;
            cout<<i<<' ';
        }
        x++;
    }
    return 0;
}