#include <stdio.h>
int main()
{
    long int n,m,g,l,i;
    scanf("%ld%ld",&n,&m);
    for(i=1;i<=n&&i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
            g=i;
        }
    }
    l=(n*m)/g;
    printf("%ld",l);
}