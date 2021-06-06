/*Write a C program that reads and displays details of 4 students.
  The 'structure' should contain the RollNo(int), FirstName(string) and marks(float).*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main() {
    int i;
    for (i = 1; i <=4; i++) 
    {
        scanf("%d",&s[i].roll);
        scanf("%s", s[i].firstName);
        scanf("%f", &s[i].marks);
    }
    for (i = 1; i <=4; i++) {
        printf("DETAILS OF ROLLNO %d\n",s[i].roll);
        printf("NAME: %s\n",s[i].firstName);
        printf("MARKS: %.2f\n",s[i].marks);
    }
    return 0;
}
