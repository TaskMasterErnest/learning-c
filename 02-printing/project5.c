// A program that takes numbers from 1 - 16 and displays them in a 4 by 4 arrangement.
// followed by the sums of the rows and columns.

#include <stdio.h>

int main(void)
{
  int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;
  int sumRow1, sumRow2, sumRow3, sumRow4;
  int sumCol1, sumCol2, sumCol3, sumCol4;
  int sumDiag1, sumDiag2;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

  // print the magic square
  printf("\t%d %d %d %d\n\t %d %d %d %d\n\t%d %d %d %d\n\t %d %d %d %d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);

  // calculate the sum of the rows
  sumRow1 = n1 + n2 + n3 + n4;
  sumRow2 = n5 + n6 + n7 + n8;
  sumRow3 = n9 + n10 + n11 + n12;
  sumRow4 = n13 + n14 + n15 + n16;

  // calculate the sum of the columns
  sumCol1 = n1 + n5 + n9 + n13;
  sumCol2 = n2 + n6 + n7 + n8;
  sumCol3 = n3 + n10 + n11 + n15;
  sumCol4 = n4 + n8 + n12 + n16;

  // calculate the sum of the diagonals
  sumDiag1 = n1 + n6 + n11 + n16;
  sumDiag2 = n4 + n10 + n7 + n13;

  printf("Row sums: %d %d %d %d\n",sumRow1, sumRow2, sumRow3, sumRow4);
  printf("Column sums: %d %d %d %d\n", sumCol1, sumCol2, sumCol3, sumCol4);
  printf("Diagonal sums: %d %d\n", sumDiag1, sumDiag2);

  return 0;
}