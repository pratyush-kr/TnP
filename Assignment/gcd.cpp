#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b%a, a);
}

int gcdN(vector<int> arr)
{
    int b = arr[0];
    int N = arr.size();
    for(int i=1; i<N; i++)
        b = gcd(arr[i], b);
    return b;
}

int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int gcd = gcdN(arr);
    cout<<"gcd = "<<gcd<<'\n';
    return 0;
}