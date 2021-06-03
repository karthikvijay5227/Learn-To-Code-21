//Write a C program to find the number of words in a string. Also reverse string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void StringMan(char[]);
int main() {

    char name[100];
    fgets(name, 100, stdin);
    StringMan(name);
    return 0;
}
void StringMan(char name[100])
{
    int len=strlen(name),count=1,i=0;
     while(name[i]!='\0')
    {
        if(name[i]==' '|| name[i]=='\t')
        {
            count++;
        }

        i++;
    }
     for (int i = 0; i < len/ 2; i++)
      {
        char ch = name[i];
        name[i] = name[len- i - 1];
        name[len - i - 1] = ch;
      }
    printf("no of words = %d",count);
    printf("\n%s",name);
}
