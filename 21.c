/*WAP to display whether wheatstone bridge is balance or not
if not find out value of variable resistance of the bridge */




#include<stdio.h>
void main()
{
    int p,q,r,s;
    printf("enter the values:\n");
    scanf("%d%d%d%d",&p,&q,&r,&s);
    if(p*s==r*q)
    {
        printf("wheatstone bridge is balanced");
    }
    else{
        printf("wheatstone bridge is not balanced");
    }
}
