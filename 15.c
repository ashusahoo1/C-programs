/*WAP  to display 1 if two lines in 2D are perpendicular to each other
else any other integer value */




#include<stdio.h>
void main(){
    float m1,m2,t;
    printf("enter slope of first 2D line:\n");
    scanf("%f",&m1);
    printf("enter slope of second 2D line:\n");
    scanf("%f",&m2);
    t=(m1*m2==-1);
    

     printf("do they satisfy perpendicular property?display 0 for no 1 for yes: %.2f\n",t);
}
