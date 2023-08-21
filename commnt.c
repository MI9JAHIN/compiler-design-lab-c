#include<stdio.h>
#include<string.h>

int main()
{
char st[100];
int b,c=0;
printf("Enter Your String : ");
gets(st);
int length = strlen(st);
//printf("Length : %d\n",length);

for(int i=0; i<length; i++)
{
    if(st[i]=='/' && st[i+1]=='/')
    {
        printf("Single-lined Comment\n");
        /*printf("The comment was : ");
        for(i=i; i<length; i++)
        {
            printf("%c",st[i]);
            //printf("\n");
        }*/
        c=1;
        break;
    }
    else if(st[i]=='/' && st[i+1]=='*')
    {
        for(int j=i; j<length; j++)
        {
            if(st[j]=='*' && st[j+1]=='/')
            {
                b=j+1;
                //printf("Mullti-lind comment\n");
                //printf("The comment was : ");
                for(j=i; j<=b; j++) // */commnt closed korce j+1
                {
                    printf("%c", st[j]);
                }
                c=1;
                break;
            }
        }
    }
}
if(c==0)
{
    printf("Not a comment\n");
}
return 0;
}
