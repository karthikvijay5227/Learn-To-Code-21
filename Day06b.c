//WACP to determine if a triangle is valid from the given sides.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(((a+b)>c) && ((b+c)>a) && ((a+c)>b))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
