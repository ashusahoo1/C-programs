/*WAP find celcius for a given farhenheit*/




#include<stdio.h>
void main(){
    float c,f;
    printf("enter celcius:\n");
    scanf("%f",&c);

    f=(c*9/5)+32;
     printf("temp in farhenheit is: %.2f",f);
}
