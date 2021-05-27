//Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int rowCountOne, columnCountOne, rowCountTwo, columnCountTwo, i, j, k, sum = 0;
  int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

  scanf("%d", &rowCountOne);
  scanf("%d", &columnCountOne);

  for (i = 0; i < rowCountOne; i++)
    for (j = 0; j < columnCountOne; j++)
      scanf("%d", &firstMatrix[i][j]);
  scanf("%d", &rowCountTwo);
  scanf("%d", &columnCountTwo);

  if (columnCountOne != rowCountTwo)
    printf("ERROR\n");
  else
  {
    for (i = 0; i < rowCountTwo; i++)
      for (j = 0; j < columnCountTwo; j++)
        scanf("%d", &secondMatrix[i][j]);

    for (i = 0; i < rowCountOne; i++) {
      for (j = 0; j < columnCountTwo; j++) {
        for (k = 0; k < rowCountTwo; k++) {
          sum = sum + firstMatrix[i][k]*secondMatrix[k][j];
        }

        resultMatrix[i][j] = sum;
        sum = 0;
      }
    }

    for (i = 0; i < rowCountOne; i++) {
      for (j = 0; j < columnCountTwo; j++)
        printf("%d ", resultMatrix[i][j]);

      printf("\n");
    }
  }
return 0;
}
 
