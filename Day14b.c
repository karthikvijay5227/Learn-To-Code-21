//Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m,n,A[100][100];
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    if(m==n)
    {
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
            }
        }
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==m-1)
            {
                printf("%d ",A[i][j]);
            }
        }
    }
    }
    else{
        printf("ERROR");
    }
    return 0;
}
