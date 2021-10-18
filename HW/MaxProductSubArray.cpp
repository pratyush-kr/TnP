#include<vector>
#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int product = 1;
    for(int i=0; i<n; i++)
    {
        product *= arr[i];
    }
    return 0;
}