/*display time period of a simple pendulum for diff values of length
starting from 10 with length of 10*/

#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8 
void main(){
    int l;
    float t;
    printf("length \t\t time period");
    for(l=10;l<=50;l=l+10){
        t=2*pi*sqrt(l/g);
        printf("\n%d \t\t %.2f",l,t);
        

}
}
