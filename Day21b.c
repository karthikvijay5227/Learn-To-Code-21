//Write a C program to find the number of prime numbers in a array of integers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int A[100];
    int N,cn=0,count;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<N;i++)
    {
        count=0;
        for(int j=1;j<=A[i];j++)
        {
          if(A[i]%j==0)
          {
              count++;
          }
        }
        if(count==2)
        {
          cn++;  
        }
    }
    printf("%d",cn);
    return 0;
}
