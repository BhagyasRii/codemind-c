#include <stdio.h>
int main()
{ 
    float pf,da,hra,bs,gs; 
    scanf("%f%f%f",&bs,&hra,&da);
    pf=(12*bs)/100;
    gs=pf+hra+da+bs;
    printf("%.2f
%.2f",pf,gs);
    
}