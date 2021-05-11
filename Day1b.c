//Write a C Program to perform Read and Print operations using the four basic data types in C. (int, float, char & double)

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a; 
    int b;
    float c;
    double d;
    scanf("%c",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%lf",&d);
    printf("%c\n%d\n%f\n%lf",a,b,c,d);
    return 0;
}
