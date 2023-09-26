#include<stdio.h>
void main(){
	int n,i=1,c;
	printf("enter the number n = ");
	scanf("%d",&n);
	while(i<=n){
	
	if(n%i==0){
		printf("The factor is %d",i);
		printf("\n");
		
	}
	i++;
}
}
