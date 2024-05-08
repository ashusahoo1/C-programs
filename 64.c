/* find out the largest  element in  array 
 */




#include <stdio.h>


int main(){
    int n;
    double arr[100];
    printf("enter the number of elements(1-100):");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        printf("enter the number %d:",i+1);
         scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;++i){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("largest element = %2d",arr[0]);
    return 0;
}
