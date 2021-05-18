//Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int ch;
    float div,a,b;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d%f%f",&ch,&a,&b);
    switch(ch)
    {
       case 1:printf("%d",(int)a+(int)b);
              break;
       case 2:printf("%d",(int)a-(int)b);
              break;
       case 3:printf("%d",(int)a*(int)b);
              break;
       case 4:if(b==0)
              {
                printf("Cannot be determined");
              }
             else
              {
                 div=a/b;
                 printf("%.1f",div);
                 break;
              }
        }
    return 0;
}
