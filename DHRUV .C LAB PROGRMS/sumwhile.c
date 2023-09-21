#include<stdio.h>
void main(){
		int i,n,sum=0;
		
	printf("enter the value of n = ");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		i++;
		
	}
	printf("The value of sum is = %d",sum);
}
