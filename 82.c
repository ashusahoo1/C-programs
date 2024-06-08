/*WAP to add elements present in every row and 
store it in array using pointer*/


#include<stdio.h>  
  
void main(){
    int i,j,a[4][5],b[4]={0,0,0,0};
    printf("enter the values:\n");
    for(i=0;i<4;i++)
       for(j=0;j<5;j++)
       scanf("%d",&a[i][j]);
    int(*pa)[5],*pb;
    pa=a;
    pb=b;
     for(i=0;i<4;i++){
        for(j=0;j<5;j++)
        b[i]=b[i]+a[i][j];
     }
     for(i=0;i<4;i++)
     printf("%d",b[i]);
}
