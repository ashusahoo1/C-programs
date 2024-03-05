/*WAP  to display time period of simple pendulum for diff length of the thread  */




#include<stdio.h>
#include<math.h>
#define g 9.8
void main(){
    int l;
    float t;

    printf("enter length in first case:\n");
    scanf("%d",&l);
    t=(float)2*3.14*sqrt(l/g);
    printf("the time period of %d m length pendulum = %f\n",l,t);
    printf("enter length in second case:\n");
    scanf("%d",&l);
    t=(float)2*3.14*sqrt(l/g);
    printf("the time period of %d m length pendulum = %f\n",l,t);
    printf("enter length in third case:\n");
    scanf("%d",&l);
    t=(float)2*3.14*sqrt(l/g);
    printf("the time period of %d m length pendulum = %f\n",l,t);
    printf("enter length in fourth case:\n");
    scanf("%d",&l);
    t=(float)2*3.14*sqrt(l/g);
    printf("the time period of %d m length pendulum = %f\n",l,t);
    printf("enter length in fifth case:\n");
    scanf("%d",&l);
    t=(float)2*3.14*sqrt(l/g);
    printf("the time period of %d m length pendulum = %f\n",l,t);
}
