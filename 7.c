/*WAP input 2 number,swap them without third variable */




#include<stdio.h>
void main(){
    int a=10,b=20;
    printf("before swap a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swap a=%d,b=%d",a,b);
}
