#include<stdio.h>
#include<string.h>

int main()
{
    int c=0, i, j;
    char st[100];
    printf("Enter Sting : ");
    gets(st);
    int len=strlen(st);
    //printf("String : %d", len);

    for(i=0; i<len; i++)
    {
        if((st[i]=='\'' && st[i-1]!='\\') || (st[i]=='"' && st[i-1]!='\''))
        {
            for(j=i+1; j<len; j++)
            {
                if((st[i]=='\'' && st[i+1]!='\\') || (st[i]=='"' && st[i+1]!='\''))
                {
                    printf("Stirng found : %c",st[i]);
                    c++;
                    break;
                }
            } 
        }
    }
    if(c==0)
    {
        printf("There is no string");
    }
    return 0;

}