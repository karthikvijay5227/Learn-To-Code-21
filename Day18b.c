/*Write a C program to input two numbers.If sum of the numbers is even,
  find the reverse of the sum .If sum is odd check whether the sum is prime or not.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Reverse(int,int);
void Prime(int,int);
int main() {

    int a,b;
    scanf("%d%d",&a,&b);
    if((a+b)%2==0)
    {
        Reverse(a,b);
    }
    else
    {
       Prime(a,b); 
    }
    return 0;
}
void Reverse(int a,int b)
{
    int num=a+b;
    int digit,rev=0;
    while(num!=0)
    {
        digit=num%10;
        rev=(rev*10)+digit;
        num/=10;
    }
    printf("%d\n%d",(a+b),rev);
}
void Prime(int a,int b)
{
    int num=a+b,flag=0;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        printf("%d\nNot prime",num);
    }
    else
    {
        printf("%d\nPrime",num);
    }
}
