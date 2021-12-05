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
    map<int, bool> isFib;
    mp[1] = 0;
    mp[2] = 1;
    mp[3] = 1;
    fibonnaci(30);
    for(auto x : mp)
        isFib[x.second] = true;
    int n, i=0;
    cin>>n;
    int x=0;
    while(i<n)
    {
        if(isFib[x] == false)
            cout<<x<<' ', i++;
        x++;
    }
    cout<<'\n';
    return 0;
}