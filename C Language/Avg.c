#include<stdio.h>
int main(){
int a,b,c;
float d;
printf("Enter An Integer Value");
scanf("%d %d %d", &a,&b,&c);
d=(a+b+c)/3;
printf("%f", d);
return 0;
}