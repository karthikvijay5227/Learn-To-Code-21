//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char name[40];
    int count=0;
    fgets(name,40,stdin);
    char item;
    scanf("%c",&item);
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==item)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
