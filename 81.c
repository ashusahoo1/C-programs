/*accessing 2d array using pointer variable*/


#include<stdio.h>  
  
void main(){
    int i,j,a[2][3]={1,2,3,4,5,6};
    int(*ptr)[3];
    ptr=a;
    for(j=0;j<3;j++){
    printf("%d",a[i][j]);
    printf("\n");
    }
}
