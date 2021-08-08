#include<iostream>
#include<cstdio>
#include<cmath>

/*
a monkey wants to climb a tree after n he slips by m
*/

int main()
{
    int h = 10;
    int n = 3;
    int m = 2;
    double result = ceil((h-n)/(n-m));
    result = result + (h-result*(n-m))/n;
    printf("%.2lf", result);
    return 0;
}