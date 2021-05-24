//Write a C program to find the frequency of odd and even numbers in the 1D array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,A[256],count_o=0,count_e=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]%2==0)
        {
            count_e++;
        }
        else
        {
            count_o++;
        }
    }
    printf("%d\n%d",count_e,count_o);
    return 0;
}
