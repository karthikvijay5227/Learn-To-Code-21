//Write a C Program to display each day of the week using switch case.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Sunday");
               break;
        case 2:printf("Monday");
               break;
        case 3:printf("Tuesday");
               break;
        case 4:printf("Wednesday");
               break;
        case 5:printf("Thursday");
               break;
        case 6:printf("Friday");
               break;
        case 7:printf("Saturday");
               break;
        default:printf("Error");
    }
    return 0;
}
