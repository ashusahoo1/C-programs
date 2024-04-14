/*find out sum of digit present in no using recursion*/



#include <stdio.h>

 int sumofdigits(int num);
int main(){
    int num,sum;
    printf("enter any number to find sum of digits:\n");
    scanf("%d",&num);
    sum=sumofdigits(num);
    printf("sum of digits of %d=%d",num,sum);
    return 0;
}
 int sumofdigits(int num){
    if(num==0)
return 0;
return((num%10)+sumofdigits(num/10));
 }
