/*
    display without semicolon
    and printf use putchar
*/

#include<stdio.h>

int main()
{
    while(putchar(59) && 0){}
    if(printf("%c", 59)){}
    return 0;
}