#include<iostream>
#include<vector>
using namespace std;

void Heapify(vector<int> &arr, int i, int size, auto comp)
{
    int tmp = i;
    int l = 2*i+1;
    int r = 2*i+2;
    tmp = (l<size && comp(arr[tmp], arr[l]))? l:tmp;
    tmp = (r<size && comp(arr[tmp], arr[r]))? r:tmp;
    if(tmp != i)
    {
        swap(arr[tmp], arr[i]);
        Heapify(arr, tmp, size, comp);
    }
}

void buildHeap(vector<int> &arr, int l, int r, auto comp)
{
    int size = r+1;
    int startIdx = (r+l)/2 - 1;
    for(int i=startIdx; i>=l; i--)
        Heapify(arr, i, size, comp);
}

void sort(vector<int> &arr, int l, int r, auto comp)
{
    buildHeap(arr, l, r, comp);
    for(int i=r; i>=l; i--)
    {
        swap(arr[l], arr[i]);
        Heapify(arr, l, i, comp);
    }
}

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
    int array[] = {5, 4, 6, 2, 1, 3, 8, 9, 7, 0};
    int n = sizeof(array)/sizeof(*array);
    int middle = n/2;
    for(int i=0; i<n; i++)
        arr.push_back(array[i]);
    sort(arr, 0, middle-1, [](int a, int b){
        return (a < b);
    });
    vector<int> arr2;
    for(int i=middle; i<n; i++)
        arr2.push_back(array[i]);
    sort(arr2, 0, arr2.size()-1, [](int a, int b){
        return (a > b);
    });
    for(int i=middle; i<n; i++)
        arr[i] = arr2[i];
    for(int i=0; i<n; i++)
        cout<<arr[i]<<' ';
    cout<<'\n';
    return 0;
}