#include<stdio.h>
#include<string.h>

int main()
{
    int c=0, i;
    char st[100];
    printf("Enter Sting : ");
    gets(st);
    int len=strlen(st);
    printf("String : %d", len);

    for(i=0; i<len; i++)
    {
        if(st[i]=='*' && st[i+1]=='/')
        {
            printf("\nStirng found");
            c++;
        }
    }
    if(c==0)
    {
        printf("\nThere is no string");
    }

    return 0;

}