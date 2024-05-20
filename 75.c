/* use bracket operator with pointer variable to access 
all elements of array b 
 */




#include<stdio.h>
int main(){
    int data[5];
    printf("enter the elements:\n");
    for(int i=0;i<5;++i)
    scanf("%d",data+i);
    printf("you entered:\n");
    for(int i=0;i<5;++i)
    printf("%d\n",*(data+i));
    return 0;
}
