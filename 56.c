/* recursive function to find a to the power b*/



#include <stdio.h>

int multiply(int a, int b); 
int main(){
    int b,a,result;
    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    result=a*b;
    printf("%d*%d=%d",a,b,result);
    return 0;
}
int multiply(int a, int b)
{
    if(a!=0)
    return (a*b);
    else
    return 1;
}
