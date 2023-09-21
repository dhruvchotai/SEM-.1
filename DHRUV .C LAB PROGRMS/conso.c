#include<stdio.h>
void main(){
	
	char max;
	
	printf("enter an character");
	
	scanf("%c",&max);
	
	if (max=='a'||max=='e'||max=='i'||max=='o'||max=='u')
	{
	printf("max is vowel.");	
	}
	else
	{
	printf("max is consonant.");
	}
}
