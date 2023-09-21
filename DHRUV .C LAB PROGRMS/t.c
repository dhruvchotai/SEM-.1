#include<stdio.h>
void main(){
	float a,b,c;
	printf("enter value of a b c = ");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a==b==c)
	{
		printf("triangle is equilatral");	
	}
	else if(a==b||b==c||c==a)
	{
		printf("triangle is isocels");
	}
	
	else if (((a*a)+(b*b))==(c*c) && a!=b!=c )
	{ 
		printf("triangle is right anngle");
	}
	
	else if(a!=b!=c)
	{
		printf("triangle is scalane");
	}
}
