//Write a C program to change the case of alphabets.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {

    char name[100];
    fgets(name,100,stdin);
    int length=strlen(name);
    for(int i=0;i<length;i++)
    {
        if(name[i] >= 65 && name[i] <= 90)
           {
               name[i]+=32;
           }
           else if(name[i]>=97 && name[i]<=122)
           {
               name[i]-=32;
           }
    }
           printf("%s",name);
    return 0;
}
