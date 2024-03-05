/*WAP to print  student if you are class 1 to 12
else print  university student  */




#include<stdio.h>
void main()
{
    int class;
    printf("enter the class:\n");
    scanf("%d",&class);
    if(class<=12)
    {
        printf("kiit student");
    }
    else{
        printf("kiit university student");
    }
}
