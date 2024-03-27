/*WAP inputa number find out its reverse using function*/



#include<stdio.h>
int reverse(int c){
    int m,re=0;
    do{
        m=c%10;
        re=(re*10)+m;

    }
    while(c=c/10);
    return (re);

}
void main(){
    int x,y;
    printf("enter a number:\n");
    scanf("%d",&x);
    y=reverse(x);
    printf("%d\n",y);
}
