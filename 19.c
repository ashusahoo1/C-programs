/*WAP to give 60 mark grace if age is 
below 50 else give 40 mark grace if age 
is 50 or above add 20 mark if age is below 50  */




#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter the age:\n");
    scanf("%d",&a);
    if(a<=50)
    {
        printf("garce is 60");
    }
    else{
        printf("grace is 40");
    }
}
