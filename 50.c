/*WAP given no is perfect or not using function*/



#include <stdio.h>

int perfect(int n){
    int i,su=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            su=su+i;
        }
    }
    return(0);
}
void check(int iv, int ix){
    if(iv==ix){
        printf("its a perfect number");
    }
    else{
        printf("its not a perfect number");
    }
}
void main(){
    int x,v;
    printf("enter a no");
    scanf("%d",&x);
    v=perfect(x);
    check(v,x);
}
