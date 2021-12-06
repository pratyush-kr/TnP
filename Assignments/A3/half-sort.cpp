#include<iostream>
#include<vector>

using namespace std;

void merge_sort(vector<int> &arr, int l, int r);
void sort(vector<int> &arr, int n);
void merge(vector<int> &arr, const int l, const int m, const int r);
int middle;

void print(vector<int> arr)
{
    int n=arr.size();
    printf("{%d", arr[0]);
    for(int i=1; i<n; i++)
        printf(", %d", arr[i]);
    cout<<"}\n";
}

int main()
{
    vector<int> arr;
    int array[] = {5, 4, 6, 2, 1, 3, 8, 9, 7};
    int n = sizeof(array)/sizeof(*array);
    middle = n/2;
    for(int i=0; i<n; i++)
        arr.push_back(array[i]);
    merge_sort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<'\n';
    return 0;
}

void merge_sort(vector<int> &arr, int l, int r)
{
    if(l < r)
    {
        int m = (l+r)/2;
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void merge(vector<int> &arr, int l, int m, int r)
{
    vector<int> array;
    int i=l, j=m+1;
    while(i<=m && j<=r)
    {
        if(l <= middle)
        {
            if(arr[i] < arr[j])
                array.push_back(arr[i++]);
            else
                array.push_back(arr[j++]);
        }
        else
        {
            if(arr[i] > arr[j])
                array.push_back(arr[i++]);
            else
                array.push_back(arr[j++]);
        }
    }
    while(i <= m)
    {
        array.push_back(arr[i]);
        i++;
    }
    while(j <= r)
    {
        array.push_back(arr[j]);
        j++;
    }
    for(int i=l; i<=r; i++)
    {
        arr[i] = array[i-l];
    }
}