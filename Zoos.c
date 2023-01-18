#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,w=0,c=0;
    fgets(s,1000,stdin);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='z')
        {
            w++;
        }
        else
        {
            c++;
        }
    }
    if(2*w==c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}