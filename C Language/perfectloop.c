#include<stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("enter a number = ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
     sum=sum+i;
    }
    i=i+1;  
    }
if(sum==n){
    printf("number is perfect");
}
else{
    printf("number is not perfect");
}

}