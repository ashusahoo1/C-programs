/*find sum of first n element of two array return 0(equal sum)*/


#include<stdio.h>
int large_sum(int *a,int *b, int n)
{
int i,s1=0,s2=0;
for(i=0;i<n;i++)
s1=s1+*(a+i);
for(i=0;i<n;i++)
s2=s2+*(b+i);
if(s1==s2)
return 0;
else if(s1>s2)
return 1;
else
return 2;
}
void main()
{
int g,i,x;
printf("Enter Range of array \n");
scanf("%d",&x);
int y[x],z[x];
for(i=0;i<x;i++)
{
printf("Enter value of %d element \n",i);
scanf("%d",&y[i]);
}
for(i=0;i<x;i++)
{
printf("Enter value of %d element \n",i);
scanf("%d",&z[i]);
}
g=large_sum(&y,&z,x);
if(g==0)
printf("EQUAL SUM \n");
else if(g==1)
printf("1st ARRAY SUM IS LARGER THAN 2nd ARRAY \n");
else
printf("2nd ARRAY SUM IS LARGER THAN 1st ARRAY \n");
}
