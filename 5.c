/*WAP input radius of circle find area and perimeter */




#include<stdio.h>
#define pi 3.14
void main(){
   float r,a,p;
    
    printf("enter radius:\n");
    scanf("%f",&r);
    a=pi*r*r;
    p=2*pi*r;
    printf("area of circle is:%.2f\n",a);
    printf("perimeter of circle is:%.2f\n",p);
    
}
