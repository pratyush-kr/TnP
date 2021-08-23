#include<stdio.h>

int check(int n, int i)
{
    if(n & (1<<i))
        return 1;
    return 0;
}

int main()
{
    int n, i;
    char positions[4][3] = {"st", "nd", "rd", "th"};
    printf("%s\n", positions[0]);
    printf("n: ");
    scanf(" %d", &n);
    printf("i: ");
    scanf(" %d", &i);
    if(i >= 10 && i<=20)
        printf("is %d%s bits is 1? %d\n", i, "th", check(n, i));
    else
        printf("is %d%s bits is 1? %d\n", i, positions[i%10-1], check(n, i));
    return 0;
}