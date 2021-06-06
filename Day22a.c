//Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,A[100],*ptr;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        ptr++;
    }
    ptr=&A[0];
    printf("DISPLAYING USING INDEX: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\nDISPLAYING USING POINTERS: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",( *ptr ));
        ptr++;
    }
    return 0;
}
