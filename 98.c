/*
5. Write a program in C to count the total number of duplicate elements in an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/





#include<stdio.h>
int main(){
    int i,j,n,ctr=0,arr1[100],arr2[100];

printf("enter no of element to be inserted");
scanf("%d",&n);

for(i=0;i<n;i++){
    printf("enter the element %d:",i);
    scanf("%d",&arr1[i]);
    
}
for(i=0;i<n;i++){
   printf("%d ",arr1[i]); 
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr1[i]==arr1[j]){
            ctr++;
            break;
        }
    }
}
printf("total no of duplivated element is %d",ctr);

}
