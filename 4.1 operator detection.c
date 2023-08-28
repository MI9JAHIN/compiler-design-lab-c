#include<stdio.h>
#include<string.h>

int main()
{
    int i, count=0;
    char st[100];
    printf("Enter as you want : ");
    gets(st);
    int len=strlen(st);
    //printf("Length %d", len);
    for(i = 0; i<len; i++)
    {
        if(st[i]=='=' || st[i]=='+' || st[i]=='-' || st[i]=='*' || st[i]=='/' || st[i]==',' || st[i]==';')
        {
            printf("'%c' Operator Found!\n", st[i]);
            count++;
        }
    }
    if (count==0)
    {
        printf("There is no operator found!");
    }
    
    return 0;
}