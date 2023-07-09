#include <stdio.h>
#include <math.h>
void printbinary(int num,int n){
	int i;
	for(i=n-1;i>=0;i--){
		if((num)&(1<<i)){
		printf("%d",1);
		}
		else{
			printf("%d",0);
		}
	}
	printf("
");
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	int p=1;
	for(i=1;i<=n;i++)
	{
	    p=p*2;
	}
	for(i=0;i<=(p-1);i++){
		printbinary(i,n);
	}
	/*int count=0;
	while(n){
		if((n&1)==1){
			count++;
		}
		n=n>>1;
	}
	printf("%d
",count);*/
}
