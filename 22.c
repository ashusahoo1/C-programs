/*WAP the largest among 3 no */




#include<stdio.h>
void main()
{
    int p,q,r;
    printf("enter the three numbers:\n");
    scanf("%d%d%d",&p,&q,&r);
    if(p>q&&p>r)
    {
        printf("greater number is:%d",p);
    }
    if(q>r&&q>p)
    {
        printf("greater number is:%d",q);
    }
     if(r>p&&r>q)
    {
        printf("greater number is:%d",r);
    }
}
