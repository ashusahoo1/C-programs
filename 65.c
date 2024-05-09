/* find out sum of odd no present in array of size 20 
 */




#include <stdio.h>


void main(){
    int a[20],i,sum=0;
    printf("enter upto 20 values:");
    for(i=0;i<20;i++)
    scanf("%d",&a[i]);
    for(i=0;i<20;i++){
        if(a[i]%2==1)
        sum=sum+a[i];
    }
    printf("total sum of odd number is:%d",sum);
}
