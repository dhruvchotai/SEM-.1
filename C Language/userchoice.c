#include<stdio.h>
void main(){
    int a,b,d;
    char c;
    printf("enter the value of a & b = ");
    scanf("%d %d",&a,&b);
    printf("enter you want + - * / = ");
    scanf(" %c",&c);

    if(c=='+'){
d=a+b;
printf("%d",d);
    }

      if(c=='-'){
d=a-b;
printf("%d",d);
    }

      if(c=='*'){
d=a*b;
printf("%d",d);
    }

      if(c=='/'){
d=a/b;
printf("%d",d);
    }
}
