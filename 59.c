/* WA recursive fucntion to point (n-1)
(n-2)(n-3)...0 where n is input of function*/



#include <stdio.h>
int print(int n){
    if(n!=0){
        printf("%d\n",n);
        print (n-1);
    }
    else
    printf("0");
}
void main(){
    int x,y;
    printf("enter the number:\n");
    scanf("%d",&x);
    y=print(x-1);
}
