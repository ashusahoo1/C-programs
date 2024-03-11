/*username=='a',password==12345 check whether username and password is correct*/

#include<stdio.h>
int main(){
    int password;
    char username;
    printf("enter username:\n");
    scanf("%c",&username);
    printf("enter password:\n");
    scanf("%d",&password);
    if(username=='a')
    {
        if("password==12345"){
            
            printf("password is correct");
        }
        else{
            printf("password is incorrect");
        }
    }
    else{
        printf("username and password both are incorrect");
    }
    return 0;
}
