#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    vector<int> arr(n);
    map<int, int> element;
    cout<<"array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        element[arr[i]]++;
    }
    int target;
    cout<<"Target: ";
    cin>>target;
    cout<<"{";
    int num = target - arr[0];
    if(element[num] > 0)
    {
        if(num != arr[0])
        {
            element[num]--;
            element[arr[0]]--;
            printf("(%d, %d)", arr[0], num);
        }
        else if(element[num] > 1)
        {
            element[num]--;
            printf("(%d, %d)", arr[0], num);
        }
    }
    for(int i=1; i<n; i++)
    {
        num = target - arr[i];
        if(element[num] > 0)
        {
            if(num != arr[i])
            {
                element[num]--;
                element[arr[i]]--;
                printf(", (%d, %d)", arr[i], num);
            }
            else if(element[num] > 1)
            {
                element[num]--;
                printf(", (%d, %d)", arr[i], num);
            }
        }
    }
    cout<<"}\n";
    return 0;
}