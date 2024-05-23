/*WAP a program to display all the names of pandav
using the pointer variable*/


#include<stdio.h>  
  
void main(){
    char *p[5];
    char a[]="yudhister",b[]="bhim",c[]="arjun",d[]="nakul",e[]="sahdev";
    int i,j,count=0;
    p[0]=a;p[1]=b;p[2]=c;p[3]=d;p[4]=e;
    {
        int i;
        for(i=0;i<5;i++)
        printf("%s\n",p[i]);
    }
}
