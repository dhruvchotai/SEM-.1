#include<stdio.h>
void main(){
    char s1[100],s2[100];
    printf("enter the string s1 = ");
    gets(s1);
     printf("enter the string s2 = ");
    gets(s2);
int counta,j;
     for(j=0;s1[j]!='\0';j++){
        counta++;
    }


    int i;
    for(i=0;s2[i]!='\0';i++){
int a=0;
if(s1[counta]=='\0'){
    s1[counta]=s2[a];
     a++;
     counta++;
 }
    }
    s1[i]='\0';
printf("the strings are  = ");
puts(s1);


}
