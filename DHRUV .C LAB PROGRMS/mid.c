#include<stdio.h>
void main(){
	float a,b,c;
	printf("enter three  numbers");
	scanf("%f %f %f",&a,&b,&c);
	if(c>a  a<b)
	{
		printf("%f",a);
	}
	else if(a>b  b<c)
	{
		printf("%f",b);
	}
	else if (a>c  c<b)
	{
		printf("%f",c);
	}
}
