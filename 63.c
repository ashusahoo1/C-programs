/* find out the largest array and dsiplay its position
 */



#include <stdio.h>
#define MAX_SIZE 100
void main()
{
    int arr[MAX_SIZE];
    int size,i,tosearch,found;
    printf("enter size of array:\n");
    scanf("%d",size);
    printf("enter elements in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("\n enter elements to search in array:\n");
     scanf("%d"&tosearch);
     found =0;
     for(i=0;i<size;i++)
     {
        if (arr(i)==tosearch)
        found=1;
        break;
     }
}
if(found==1)
{
    printf("\n %d ii found at position %d\n",tosearch,i+1);
}
else
{
     printf("\n %d is not found in the array %d\n",tosearch);
}
