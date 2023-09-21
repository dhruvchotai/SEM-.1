#include<stdio.h>
void main(){
		int i,n,oddsum=0,evensum=0;
		
	printf("enter the value of n = ");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0){
		
		evensum=evensum+i;
	}
		else{
			oddsum=oddsum+i;
		}
		i++;
	}
	printf("The value of evensum is = %d\n",evensum);
    printf("The value of oddsum is = %d",oddsum);
}
