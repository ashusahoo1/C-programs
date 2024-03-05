/*WAP to imput 3 digit number and find out its reverse*/




#include<stdio.h>
void main(){
    int a,d,r;
    printf("enter three digit number:\n");
    scanf("%d",&a);
    d=a%10;
    r=d;
    a=a/10;
    d=a%10;
    r=(r*10)+d;
    a=a/10;
    d=a%10;
    r=(r*10)+d;
    a=a/10;

     printf("reverse number is: %d",r);
}
