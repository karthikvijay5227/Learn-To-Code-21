//Write a C program to count and display the number of Vowels, Consonants and spaces in a string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char name[100];
    int count1=0,count2=0,count3=0;
    fgets(name,100,stdin);
    for(int i=0;i<strlen(name);i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            count1++;
        }
        else if(name[i]==' ')
        {
            count3++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d\n%d\n%d",count1,count2,count3);
    return 0;
}
