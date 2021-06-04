//Write a C program to find the second maximum element in an array of integer elements.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>

int main() {

    int N,A[100],i=0,max,max2;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    max = max2 = INT_MIN;
    for(i=0; i<N; i++)
    {
        if(A[i] > max)
        {
            max2 = max;
            max = A[i];
        }
        else if(A[i] > max2 && A[i] < max)
        {
            max2 = A[i];
        }
    }
    printf("%d",max2);
    return 0;
}
