#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,b,k,r,a=0,v,l;
    scanf("%d%d",&n,&m);
    l=n;
    while(n)
    {
        n=n/10;
        a++;
    }
    n=l;
    b=pow(10,m);
    v=pow(10,a-m);
    k=n%b;
    r=n/v;
    printf("%d",abs(k-r));
}