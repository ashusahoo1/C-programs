/*enter the three side of a triangle and check whther it is possible or not*/

#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter three side:\n");
  
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        
        printf("it is a triangle");
    }
    else{
       printf("it is not a triangle");
    }

}
