/*
3. Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/



#include<stdio.h>
int main(){
    int a[10]={1,2,3},sum=0;
    for(int i=0;i<3;i++){
       sum+=a[i];
       
    }
    printf("%d",sum);
}

