#include <stdio.h>
int main()
{
    int n,i,m=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        m=m+ar[i];
    }
    int l=m/n,c=0;
    for(i=0;i<n;i++)
    {
        if(l==ar[i])
        {
        c=1;
        break;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}