#include<iostream>

/*
array of two element with having 0 and 1
*/

int main()
{
    bool a[] = {1, 1};
    a[!a[0]] = a[!a[1]];
}