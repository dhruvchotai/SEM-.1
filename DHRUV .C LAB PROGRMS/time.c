#include<stdio.h>
void main(){
	int h,s,m;
	printf("enter your second value = ");
	scanf("%d",&s);
	printf("here is your time value = ");
	h=s/3600;
	s=s%3600;
	m=s/60;
	s=s%60;
	printf("%d",h);
	printf(":");
	printf("%d",m);
	printf(":");
	printf("%d",s);
	
}
