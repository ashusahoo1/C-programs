/*WAP input length and breadth of rectangle find area and perimeter */




#include<stdio.h>
#define pi 3.14
void main(){
   float l,b,p,a;
    
    printf("enter length and breadth:\n");
    scanf("%f%f",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("area of rectangle is:%.2f\n",a);
    printf("perimeter of rectangle is:%.2f\n",p);
    
}
