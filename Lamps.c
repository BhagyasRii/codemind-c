#include <stdio.h>
int main()
{
    float n,k,x,y,m;
    scanf("%f%f%f%f",&n,&k,&x,&y);
    float l=n-k;
    if(l*x<l*y)
    {
        m=k*x+l*x;
    }
    else
    {
        m=k*x+l*y;
    }
    printf("%.0f",m);
    
    
}