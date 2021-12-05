#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, int> mp; //key to sum
    int arr[] = {1, 2, 3, 4, 1, 5, 3, 6, 10, 11, 11, 4, 2, 99, 10};
    int n = sizeof(arr)/sizeof(*arr);
    for(int i=0; i<n; i++)
        mp[arr[i]]++;
    for(int i=0; i<n; i++)
    {
        if(mp[arr[i]] <= 1)
            printf("%d ", arr[i]);
    }
    cout<<'\n';
}