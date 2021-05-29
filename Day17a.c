//Write a C program to print half pyramid of numbers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n<1)
    {
        printf("ERROR");
    }
    else{
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
          if(j<=i)
          {
              printf("%d ",j);
          }
      }
      printf("\n");
    }}
    return 0;
}
