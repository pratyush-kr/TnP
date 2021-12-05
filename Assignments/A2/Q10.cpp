#include<iostream>

/*
    1 * 2 * 3 * 4
    9 * 10 * 11 * 12
    13 * 14 * 15* 16
    5 * 6 * 7 * 8
*/

int main()
{
    int n;
    std::cout<<"n: ";
    std::cin>>n;
    int x = 1;
    const int f = n;
    std::string str = "";
    for(int i=0; i<n; i++)
    {
        if(i == 1)
        {
            str += std::to_string(x++);
            for(int j=1; j<n; j++)
                str += " * " + std::to_string(x++);
            continue;
        }
        printf("%d", x++);
        for(int j=1; j<n; j++)
            printf(" * %d", x++);
        std::cout<<'\n';
    }
    std::cout<<str<<'\n';
    return 0;
}