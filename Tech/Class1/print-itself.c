#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Class1
    FILE *file;
    file = fopen("add-2-nos.out", "r");
    char ch;
    while((ch = fgetc(file)) != EOF)
        printf("%c", ch);
    printf("\n");
    return 0;
}