#include <stdio.h>
int main()
{
    int n,a[100],b[100],j=0,i,c,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d ",a[i]);
            k++;
        }
    }
    if(k==0)
    {
        printf("-1");
    }
}