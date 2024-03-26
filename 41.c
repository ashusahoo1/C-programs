/*WAP to find factorial*/


#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact=1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n<0)
    printf("error! factorial of negative number does not exist");
    else{
      for(i=1;i<=n;++i){
         fact*=i;
      }
      printf("factorial of %d=%llu",n,fact);
    }
    return 0;
}
