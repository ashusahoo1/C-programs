/*WAP input 2 number,swap them using third variable */




#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter two integers\n");
    scanf("%d%d",&a,&b);
    printf("before swapping first variable:%d\n second variable: %d\n",a,b);
    c=a;
    a=b;
    b=c;
     printf("after swapping first variable:%d\n second variable: %d",a,b);
}
