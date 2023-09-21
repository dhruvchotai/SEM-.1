#include<stdio.h>
void main(){
	int a,b;
	printf("enter the value of a = ");
	scanf("%d",&a);
	
	printf("enter the value of b = ");
	scanf("%d",&b);
	
	while(a<=b){
		
		if(a%2==0){
			printf("%d\n",a);
		}
	
	a++;
	}
	
}
