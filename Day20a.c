//Write a C program to find the factorial of a given number using a recursive function

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long int Factorial(int n);
int main() {
    int num;
    scanf("%d",&num);
    if(num<0)
    {
        printf("ERROR");
    }
    else
    {
      printf("%ld",Factorial(num));  
    }
    return 0;
}

long int Factorial(int n) 
{
     if (n>=1)
        return n*Factorial(n-1);
     else
        return 1;
}
