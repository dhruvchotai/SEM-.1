//odd even using bitwise operator
#include<stdio.h>
void main(){
    int a;
    printf("enter value of a = ");
    scanf("%d",&a);
    if(a&1)
    {
        printf("number is odd");
    }
    else{
        printf("number is even");
        
    }
}