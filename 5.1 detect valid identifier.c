#include<stdio.h>
#include<string.h>

int main()
{
    int count=0;
    char st[100];
    printf("Enter a valid Identifier : ");
    gets(st);
    int len=strlen(st);
    //printf("%d",len);
    if ((st[0] == '_') || (st[0] >='a' && st[0] <='z') || (st[0] >='A' && st[0] <='Z'))
    {
        for (int i=1; i<len; i++)
        {
            if (st[i] == ',')
            {
                count++;
            }
        }
    }
    if (st[0] >= '0' && st[0] <= '9')
    {
        count++;
    }

    if(count==1)
    {
        printf("Invalid\n");
    }
        
    else
        printf("Valid\n");
        
}