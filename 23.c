/*if basic salary<rs 1500 then hra=10% and da=40% if base salary hra=rs 500
and da=50% of basic salary find gross salary */




#include<stdio.h>
void main()
{
    int a,b,c,d,e,f;
    printf("enter basic salary:\n");
    scanf("%d",&a);
    if(a<1500)
    {
        b=a+(a*10)/100+(a*40)/100;
        printf("gross salary is %d",b);
    }
    else{
        c=a+(a*10)/100+500;
        printf("gross salary is %d",c);
    }
}
