#include <stdio.h>
#include <math.h>
int main(){
    int n,sq;
    scanf("%d",&n);
    sq=n*n;
    int d=log10(n)+1;
    int last=pow(10,d);
    int l=sq%last;
    if(n==l){
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic Number");
    }
}