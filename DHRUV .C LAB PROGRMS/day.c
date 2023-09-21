#include<stdio.h>
void main(){
	int d,y,w;
	printf("enter your day = ");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	w=d/7;
	d=d%7;
	printf("here is your year = ");
	printf("%d",y);
	printf("\nhere is your week =  ");
	printf("%d",w);
	printf("\nhere is your day = ");
	printf("%d",d);
	
}
