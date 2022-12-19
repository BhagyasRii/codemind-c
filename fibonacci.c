#include <stdio.h>
int main()
{
    int a,b,c,s=0,n,i;
    scanf("%d",&n);
    a=0,b=1;
    c=a+b;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}