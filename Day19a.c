//Write a C program to check whether a given number is amstrong or not.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Amstrong(int);
int main() {

    int num;
    scanf("%d", &num);
    Amstrong(num);
    return 0;
}
void Amstrong(int num)
{
     int originalNum, remainder, result = 0; 
     originalNum = num;
     while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("Amstrong");
    else
        printf("Not Amstrong"); 
}
