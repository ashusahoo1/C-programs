/* program to find average marks obtained by class of 20 students in the
test and count number of student securing above 90 
 */




#include <stdio.h>


void main(){
   int i,avg,count=0,sum=0,marks[20];
   for(i=0;i<20;i++){
    printf("\nenter marks:\n");
    scanf("%d",&marks[i]);
   }
   for(i=0;i<20;i++){
    sum=sum + marks[i];
    if(marks[i]>89)
    count++;
   }
   avg=sum/20;
    printf("\naverage marks:%d",avg);
     printf("\nstudent scored above 90:%d\n",count);
}
