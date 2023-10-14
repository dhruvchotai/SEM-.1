#include<stdio.h>
void main(){
    int i,n;
    printf("enter the size of array = ");
    scanf("%d",&n);
    int a[n],sum=0;
    for(i=0;i<n;i++){
        printf("enter an element into a[%d] = ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    float avg;
    avg=(sum/n); 
    for(i=0;i<n;i++){
        if(a[i]>avg){
            printf("\n");
            printf("The num greater than avg of array is = ");
            printf("%d",a[i]);
            printf("\n");
        }
    }
}