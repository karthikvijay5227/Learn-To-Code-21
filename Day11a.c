/*Write a C program to read n values from the user and store it in the array.
  Reprint the values stored in the array and also print the value of second element in the array.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A[256],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Entered array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    for(int i=1;i<2;i++)
    {
        printf("\n%d",A[1]);
    }
    return 0;
}
