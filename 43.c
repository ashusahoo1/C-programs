/*WAP input 2 number find out its addition using function*/


#include <stdio.h>
int sum(int a, int b) {
    return a+b;
    }
    void main()
    {
      int x,y,z;
      printf("enter two number:\n");
      scanf("%d%d",&x,&y);
      z=sum(x,y);
      printf("addition of two no:%d\n",z);
    }
