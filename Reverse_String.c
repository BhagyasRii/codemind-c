#include <stdio.h>
#include <string.h>
int main()
{
    char s[150];
    int i,w=0,m;
    fgets(s,150,stdin);
    int l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        m=s[i];
        s[i]=s[l-1-i];
        s[l-i-1]=m;
        
    }
    printf("%s",s);
    
}