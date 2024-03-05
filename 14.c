/*WAP  input basic salary of an employee ta is 20% of basic da is 10%
 and hr is 30% of basic salary calculate gross salary */




#include<stdio.h>
void main(){
    float bs,ta,da,hr,gs;
    printf("enter basic salary:\n");
    scanf("%f",&bs);
    ta=bs*0.20;
    da=bs*0.10;
    hr=bs*0.30;
    gs=ta+da+hr+bs;

     printf("gross salary is: %.2f",gs);
}
