#include<stdio.h>
void main()
{
	int i=1,n,evencount=0,oddcount=0;
	while(i<=10){
		printf("enter the number n = ");
		scanf("%d",&n);
		if(n%2==0){
			evencount=evencount+1;
		}
		else {
			oddcount=oddcount+1;
		}
		
		i++;
}
	printf("your even count is = %d\n",evencount);
		printf("your odd count is = %d",oddcount);
}
