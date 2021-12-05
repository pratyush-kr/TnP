#include<iostream>

using namespace std;

int all_pairs(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            sum += arr[i] + arr[j];
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(*arr);
    cout<<all_pairs(arr, n)<<'\n';
    return 0;
}