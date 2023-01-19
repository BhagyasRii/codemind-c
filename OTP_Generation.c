#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,k,j;
    scanf("%s",s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        j=int(s[i])-48;
        if(j%2!=0)
        {
           printf("%d",j*j);
        }
    }
}