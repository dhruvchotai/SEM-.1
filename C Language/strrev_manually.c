#include<stdio.h>
#include<string.h>

void main(){
    char temp,a[100];
    printf("enter the value of string a : ");
    gets(a);

    int  b=strlen(a);
    int i,j=b-1;

    for(i=0;i<(b/2);i++){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    
printf("the reverse string is   : ");
    puts(a);

}