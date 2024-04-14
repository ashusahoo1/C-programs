/*find out no of digit present in no using recursion*/



#include <stdio.h>

 int countdigits(int num){
    static int count=0;
    if (num>0){
        count++;
        countdigits(num/10);

    }
    else{
        return count;
    }
 }
int main(){
    int number;
    int count=0;
    printf("enter a positive integer number:\n");
    scanf("%d",&number);
    count=countdigits(number);
    printf("total digits in number%d is:%d\n",number,count);
    return 0;
}
