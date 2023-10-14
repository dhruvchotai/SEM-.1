#include<stdio.h>
void main(){
    char s1[100],s2[100];
    printf("enter the string s1 = ");
    gets(s1);
     printf("enter the string s2 = ");
    gets(s2);
    int i,j;
    for(i=0;s1[i]!='\0';i++){

    }
    for(j=0;s2[j]!='\0';j++){
        s1[i]=s2[j];
        i++;
    }
    s1[i]='\0';
    puts(s1);
}