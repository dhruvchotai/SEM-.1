#include<stdio.h>
void main(){
    int i=2,n,flag=0;
    printf("enter a number = ");
    scanf("%d",&n);
    while(i<=n/2){
        if(n%i==0){
     flag=1;
        }
        i++;
    }
    
if(flag==1){

    printf("number is  not prime");
} 
else{
    printf("number is prime");
}
}