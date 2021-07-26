#include<stdio.h>

int main()
{
    char *str[2] = {"Even", "Odd"};
    int x = 3;
    printf("x: ");
    scanf("%d", &x);
    printf("%s\n", str[x&1]);
    return 0;
}