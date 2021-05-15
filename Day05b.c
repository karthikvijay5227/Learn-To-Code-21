//Write a C Program to determine the factorial of a number.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,fact=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    if(num<0)
    {
        printf("ERROR");
    }
    else
    {
       printf("%d",fact);
    }
    
    return 0;
}
