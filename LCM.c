#include <stdio.h>
int main()
{
    int n,m,l;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        if(m%i==0 && n%i==0)
        {
            l=i;
        }
    }
    int lcm=(m*n)/l;
    printf("%d",lcm);
}