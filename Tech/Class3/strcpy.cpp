#include<iostream>

void cpy(char *a, char *b)
{
    while(*b++ = *a++);
}

// NUL = '\0'
// NULL it is a macro

int main()
{
    char *str;
    cpy("KIIT", str);
    std::cout<<str<<'\n';
    return 0;
}
