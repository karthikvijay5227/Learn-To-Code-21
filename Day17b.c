//Write a C program to print inverted full pyramid of *.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int rows, i, j,space;
   scanf("%d", &rows);
   if(rows<1)
   {
       printf("ERROR");
   }
   else
   {
    for (i =rows;i >= 1;--i)
    {
      for(space = 0; space < rows - i; ++space)
      {
        printf("  ");   
      }
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
    }  
   }
  
return 0;
}
