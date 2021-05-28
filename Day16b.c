//Write a C program to find the minimum and maximum element of an array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int n,A[100],max,min; 
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&A[i]); 
    }
    max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    min=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    printf("%d\n%d",min,max);
    return 0;
}
