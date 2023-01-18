#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,w=1;
    fgets(s,1000,stdin);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            w++;
        }
    }
    printf("%d",w);
    return 0;
}