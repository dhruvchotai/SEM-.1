#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=5;(j<=5 && j>0);j--){
            if(j<=i)
            {
                printf("*");
            }
           else
           {
           printf(" ");
           } 

        
        }
          printf("\n");
        }
      
    }
