#include<iostream>

using namespace std;

int main()
{
    int num, tmp;
    cin>>num;
    tmp = num;
    int sum = 0;
    while(tmp!=0)
    {
        sum += tmp%10;
        tmp = tmp/10;
    }
    cout<<((num%sum == 0)? "Harshad Number\n" : "Not Harshad\n");
    return 0;
}