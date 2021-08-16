/*
    There are N interns numbered from 1 to N. Each intern is assigned
    a unique ID for each day. rules being 1<=N<=24.
    The ith Intern has an ID of (5000*i) on day 1 and for rest of days;
    day[j] = day[j-1] + 5000 + (j-1). Input to the problem is ID of the intern/
    Output is number of intern on a particular day.
*/

#include<iostream>

int main()
{
    int ID, intern;
    std::cin>>ID;
    int d = ID%5000;
    if(d == 0)
    {
        intern = ID/5000;
        printf("Intern on Day 1 is %d\n", intern);
    }
    else
    {
        int i = 1;
        while(ID%5000 != 0)
        {
            ID = ID-5000-i;
            i++;
        }
        intern = ID/5000;
        printf("Intern on Day %d is %d\n", i, intern);
    }
    return 0;
}