/* WAF find out largest btw no count the number of leaders
 */



#include <stdio.h>
int largest(int n){
    int x,i,largest=0,c=0;
    printf("enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>largest){
            largest=x;
            c++;
        }
    }
    printf("no of leaders is%d\n",c);
    return
    largest;
}
void main()
{
    int a,lar;
    printf("enter the no of numbers:\n");
    scanf("%d",&a);
    lar=largest(a);
    printf("leader=%d",lar);
}
