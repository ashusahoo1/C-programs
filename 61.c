/* WAF prime()that returns 1 if its arguement is prime no
else return zero      (not correct )
 */



#include <stdio.h>
int prime(int x){
    int i,f=0;
    for(i=1;i<=f;i++){
        if(x%i==0)
        f++;
    }
    if(f==2)
    return 1;
    else
    return 0;
}
void main(){
    int a;
    printf("enter a number:\n");
    scanf("%d",&a);
    if(prime(a)==1)
    printf("%d is a prime number\n",a);
    else
      printf("%d is not a prime number\n",a);
}
