/*enter score of 11 cricket player and find the average score repeat procedure two step*/

#include<stdio.h>
void main(){
    int score,sumscore=0,i=1;
    float avgscore;
    repeat:
    printf("enter score of next player no %d:\n",i);
   scanf("%d",&score);
   sumscore+=score;
   i++;
    if(i<=11)goto repeat;
    avgscore=sumscore/11;
    printf("total score is:%d and average score is:%f",sumscore,avgscore);

}
