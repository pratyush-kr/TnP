#include<stdio.h>

int main()
{
    char ch;
    while(ch != '0')
    {
        scanf(" %c", &ch);
        ch = (char)(((int)ch)^32);
        printf("%c\n", (char)ch);
    }
    return 0;
}