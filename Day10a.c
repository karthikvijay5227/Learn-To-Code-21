//Write a C program to print the above series starting from 0 and the upperlimit is determined by the user

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int first=0,second=1,third;
    scanf("%d",&n);
    printf("%d %d",first,second);
    for(int i=2;i<n;i++)
    {
        third=first+second;
        first=second;
        second=third;
        printf(" %d",third);
    }
    return 0;
}
