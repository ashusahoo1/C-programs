/*WAP to  display if a no is prime or not*/

#include<stdio.h>
 
void main(){
    int num,i;
    int flag=1;
    printf("enter a number:\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
           flag=0;
           break;
        }
        }
        if(flag){
             printf("prime number");
        }
        else {
             printf("not prime num");
        }
        

}
