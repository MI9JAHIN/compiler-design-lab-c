#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    printf("Enter your string : ");
    gets(st);
    int len = strlen(st);
    printf("Length : %d\n", len);

    return 0;
}