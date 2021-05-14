//Write a C Program to find the maximum and minimum from three user inputted numbers.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c,max,min;
    scanf("%d%d%d",&a,&b,&c);
     if (a<b && a<c)
     {
         min=a;
     }
        
    else if(b<a && b<c){
        min=b;}
    else{
        min=c;}

    if (a>b && a>c){
        max=a;}
    else if(b>a && b>c){
        max=b;}
    else{
        max=c;}
    printf("%d\n%d",max,min);
    return 0;
}
