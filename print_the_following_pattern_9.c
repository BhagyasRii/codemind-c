#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
        {
        for(int j=n-1;j>=i;j--)
            {
                printf(" ");
            }
        for(int k=1;k<=2*i-1;k++)
            {
                printf("%d",i);
            }
            printf("
");
        }
}