#include <stdio.h>
#include <string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    int  ar[100001],c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0 || ar[i]<=1)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True
");
    }
    else{
        printf("False
");
    }
}
