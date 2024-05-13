/* take a matrix of size 4x5 mulptiply it with scalar
 */




#include <stdio.h>
int main() {
  int a[4][5],num , r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix



  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]


  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the scalar



  printf("enter scalar number:\n");
  scanf("%d",&num);





  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    a[i][j]=num*a[i][j];
  }

  // printing the scalar x matrix




  printf("\nresultant of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }
  return 0;
}
