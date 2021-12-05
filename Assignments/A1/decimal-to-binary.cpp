#include<iostream>

using namespace std;

string decimal_to_binary(int n)
{
    string str = "";
    for(int i=7; i>=0; i--)
    {
        int k = n>>i;
        str += to_string(k&1);
    }
    return str;
}

int main()
{
    int n;
    cin>>n;
    string binary = decimal_to_binary(n);
    cout<<binary<<'\n';
    return 0;
}