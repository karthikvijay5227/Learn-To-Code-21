//Write a C Program to convert Fahrenheit to Celsius.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float f;
    float c;
    scanf("%f",&f);
    c=(5*(f-32))/9;
    printf("%.2f",c);
    return 0;
}
