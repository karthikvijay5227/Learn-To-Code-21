//Write a C program to check whether a number present in the 1D array or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,flag=0;
    scanf("%d",&n);
    int A[256];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int item;
    scanf("%d",&item);
    for(int i=0;i<n;i++)
    {
        if(A[i]==item)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is present in this array",item);
    }
    else{
        printf("%d is not present in this array",item);
    }
    
    return 0;
}
