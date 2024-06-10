/*copying a string from source to destination*/


#include <stdio.h>
void main(){
    char source[20],destination[20];
    int i;
    printf("enter string:\n");
    scanf("%s",source);
    i=0;
    while(source[i]!='\0'){
        destination[i]=source[i];
        i++;
    }
        destination[i]='\0';
        printf("copied string from src to dst:\n");
        printf("dst is:%s\n",destination);
    
}
