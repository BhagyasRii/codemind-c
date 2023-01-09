#include <stdio.h>
int main()
{
    int n,ar[100],list[100]={0},i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        list[ar[i]]++;
    }
    for(i=1;i<100;i++)
    {
        if(list[i]==i)
        {
            c++;
        }
    }
    printf("%d",c);
}