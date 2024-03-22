/*WA  menu driven program*/

#include<stdio.h>

int main()
{
    int c=0,num,res, n, flag=0,i;

    while(c!=4){
        printf("1: factorial of a number\n");
        printf("2: prime number or not\n");
        printf("3: odd or even\n");
        printf("4: exit\n");
        printf("enter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1:
            printf("enter an integer:\n");
            scanf("%d",&num);
            n=num;
            res=num;
            while(num>1){
                res=res*(num-1);
                num=num-1;
            }
            printf("\n factorial of %d is %d\n\n",n,res);
            break;
             case 2:
            printf("enter an integer:\n");
                scanf("%d",&num);
                n=num;
                for(i=2;i<=n/2;i++){
                if (num%i==0){
                    flag=1;
                    break;
                }
                }
            
           if (num==1)
            printf("neither prime nor composite\n");
           
           else
           {
            if(flag==0)
            printf("\n %d is prime number\n",n);
            else
                printf("\n %d is not prime number\n",n);
            }
            break;
            case 3:
            printf("enter an integer:\n");
            scanf("%d",&num);
            n=num;
            if(num%2==0)
            printf("\n %d is even\n",n);
            else
            printf("\n %d is odd\n",n);
            break;
            case 4:
            printf("\n exit\n");
            break;
           }
        }
    }
