/*WAP  given 3 output(a,b,c)display 1 if those are sides of a 
right angle traingle else display 0 on the screen  */




#include<stdio.h>
void main(){
    int a,b,c,p;
    printf("enter length of first side:\n");
    scanf("%d",&a);
    printf("enter length of second side:\n");
    scanf("%d",&b);
    printf("enter length of third side:\n");
    scanf("%d",&c);
    p=(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a);


     printf("do they satisfy pythagores property?display 0 for no 1 for yes: %.2f\n",p);
}
