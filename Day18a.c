//Write a C program to swap the values of two variables.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int,int);
int main() {

    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("a=%d b=%d",x,y);
}
