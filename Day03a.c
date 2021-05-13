//Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,h,r;
    const float pi=3.14;
    scanf("%d%d%d%d",&a,&r,&b,&h);
    int AreaSq=a*a;
    float AreaC=pi*r*r;
    float AreaTr=0.5*b*h;
    printf("%d\n%.1f\n%.2f\n",AreaSq,AreaC,AreaTr);
    
    return 0;
}
