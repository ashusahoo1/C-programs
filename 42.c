/*WAP to print all ASCII values and equivalent character using a while loop*/


#include <stdio.h>
int main() {
    char ascii;
    int i;
    for(i=0;i<=255;i++){
      printf("%c=%d",i,i);
    }
    return 0;
}
