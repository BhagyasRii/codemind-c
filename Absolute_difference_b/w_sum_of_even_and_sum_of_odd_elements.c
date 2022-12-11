#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,s=0,m=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
        s=s+ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
        m=m+ar[i];
        }
    }
    printf("%d",abs(s-m));
}