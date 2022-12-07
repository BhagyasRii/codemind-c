#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int l,m,c=0,t,r;
        scanf("%d%d",&l,&m);
        for(t=l;t<=m;t++)
        {
            if(t%10==2 || t%10==3 || t%10==9)
        
                c++;
          
        }
        printf("%d
",c);
    }
}