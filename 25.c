/*wap to dsiplay whether a vehicle moves with constant velocity or accelerated
deaccelerated */




#include<stdio.h>
void main()
{
    int a;
    printf("enter the vlaue of a:\n");
    scanf("%d",&a);
    if(a==0)
    {
       
        printf("the vehicle moves with constant velocity\n");
    }
    else if(a>0){
         printf("the vehicle moves with accelerated velocity\n");
    }
     else {
         printf("the vehicle moves with deccelerated velocity\n");
    }
}
