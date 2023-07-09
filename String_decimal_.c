#include <stdio.h>
#include <string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    char s[100001];
    scanf("%s",s);
    int l=strlen(s),c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            c++;
        }
    }
    if(c==l)
    {
        printf("True
");
    }
    else{
        printf("False
");
    }
}
}