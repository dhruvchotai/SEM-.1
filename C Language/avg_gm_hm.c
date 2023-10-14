#include<stdio.h>
#include<math.h>
void main(){
    int i,n;
    printf("enter the size of array = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter an element into a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    // for sum
    int sum=0;
        for(i=0;i<n;i++){
        sum=sum+a[i];
    }
       float avg=0;
       avg=(sum/n);
       printf("The avg of the numbers is = %f\n",avg); 

 // for gm
 
 int m=1;

     for(i=0;i<n;i++){
        m=m*a[i];
    }
       float gm;
gm=pow(m,0.2);
printf("The gm of the numbers is = %f\n",gm);
 

 // for hm 
 float sumh=0,hm;
 
     for(i=0;i<n;i++){
        sumh=sumh+(1/a[i]);
    }
    hm=(n/sumh);
    printf("The gm of the numbers is = %f\n",hm);


}