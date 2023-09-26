#include<stdio.h>
void main(){
	int n,ans=1;
	printf("enter the value of n = ");
	scanf("%d",&n);
	while(n>=1){
		ans=ans*n;
		n--;
		
	}
	printf("the factorial is %d",ans);
}
