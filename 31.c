/*enter 10 and count number of odd number and find their sum*/

#include<stdio.h>
void main(){
    int sum=0,n,count=0,i;
    for(i=0;i<10;i++){
        printf("enter the next number:\n");
        scanf("%d",&n);
        if(n%2==1)
        {
            count++;
            sum+=n;
        }
    }
    printf("no of odd no:%d and sum: %d\n:",count,sum);

}
