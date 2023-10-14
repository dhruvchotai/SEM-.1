#include<stdio.h>
void main(){
    char a[100],b[100];
    printf("enter the value of string a : ");
    gets(a);

     printf("enter the value of string b : ");
    gets(b);

    int i;
    for(i=0;b[i]!=0;i++){
        a[i]=b[i];
    }
    a[i]='\0';
    puts(a);
}