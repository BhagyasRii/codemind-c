#include <stdio.h>
int fact(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}
int main()
{
    int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int n,f=0,i,r;
        scanf("%d",&n);
        int d=n;
        while(d!=0)
        {
            r=d%10;
            f+=fact(r);
            d=d/10;
        }
        if(n==f)
        {
            printf("Strong
");
        }
        else{
            printf("Not Strong
");
        }
    }
}