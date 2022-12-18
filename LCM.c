#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,n,i,l,g;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            g=i;
        }
    }
    l=(a*b)/g;
    printf("%d",l);
}