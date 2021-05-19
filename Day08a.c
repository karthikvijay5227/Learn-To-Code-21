//Write a C Program to identify if a number is a palindrome or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,digit,rev=0,n;
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        digit=n%10;
        rev=(rev*10)+digit;
        n=n/10;
    }
    if(rev==num)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
