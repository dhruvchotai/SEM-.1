#include<stdio.h>
void main(){
	
	char alpha;
	
	printf("enter an character = ");
	
	scanf("%c",&alpha);
	
	if(alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u')
	{
	printf("alpha is vowel.");	
	}
	else
	{
	printf("alpha is consonant.");
	}
}
