//Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each ouccurence of that element with its position(s).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m,n,A[100][100],item,flag=0;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d",&item);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==item)
            {
                printf("Element found at (%d,%d)\n",i,j);
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }
    return 0;
}
