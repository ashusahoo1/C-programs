/*WAP convert given paisa into its equivalent rupees*/




#include<stdio.h>
void main(){
    int p,r;
    printf("enter paisa:\n");
    scanf("%d",&p);

    r=p/100;
     printf("paisa is:%d when converted to rupees it becomes : %d",p,r);
}
