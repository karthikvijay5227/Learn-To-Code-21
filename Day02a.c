//Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b;
    scanf("%f%f",&a,&b);
    printf("%.0f\n",a+b);
    printf("%.0f\n",a-b);
    printf("%.0f\n",a*b);
    printf("%.2f\n",a/b);
    return 0;
}
