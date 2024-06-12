/*find length of string*/


#include <stdio.h>
int main(){
    char s[]="hello world";
    int i;
   for(i=0;s[i]!='\0';++i);
   printf("length of the string:%d\n",i);
   return 0;
    
}
