#include <stdio.h>
int main()
{
    int n,i,m=0,l=0,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
     for(i=0;i<n;i++)
     {
         if(ar[i]==k)
         {
         m=1;
         break;
         }
     }
     if(m==1)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
    
}