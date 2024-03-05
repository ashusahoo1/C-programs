/*WAP  imput 3 digit and calculate sum of all digit of no*/




#include<stdio.h>
void main(){
    int a,s=0,r;
    printf("enter three digit number:\n");
    scanf("%d",&a);
    r=a%10;
    s=s+r;
    a=a/10;
    r=a%10;
    s=s+r;
    a=a/10;
    r=a%10;
    s=s+r;
    a=a/10;

     printf("sum of three digit no is: %d",s);
}
