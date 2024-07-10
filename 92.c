/*program to store and display data in a structure then find the no of books with more than 100 pages*/


#include<stdio.h>
struct book
{
    char name[10];
    float price;
    int pages;
    
};
void main ()
{
    struct book b1, b2;
    printf("Enter name, price and pages \n");
    scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
    printf("Name of book:%s      Price of book :%f     Pages of book: %d",b1.name,b1.price,b1.pages);
}
