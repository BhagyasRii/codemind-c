#include <stdio.h>
int primes(int n){
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0){
        return 1;
    }
    return -1;
}
int main()
{
    int d1,d2;
    scanf("%d%d",&d1,&d2);
    int tot=d1+d2,d3,m;
    for(int i=tot+1;;i++)
    {
        if(primes(i)==1)
        {
            m=i;
            break;
        }
    }
    d3=m-tot;
    printf("%d",d3);
    
}