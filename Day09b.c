/*Write a C program to print the following number pattern
    55555
     4444
      333
       22
        1*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, j, N;
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        for(j=N; j>i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }
  return 0;
}
