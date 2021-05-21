//Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
  int a, b, c, d;
  double root1, root2;
  scanf("%d%d%d", &a, &b, &c);

  d = b*b - 4*a*c;

  if (d < 0) { 
    printf("Complex: %.2lf + i%.2lf ", -b/(double)(2*a), sqrt(-d)/(2*a));
    printf(", %.2lf - i%.2lf", -b/(double)(2*a), sqrt(-d)/(2*a));
  }
  else { //real roots
    root1 = (-b + sqrt(d))/(2*a);
    root2 = (-b - sqrt(d))/(2*a);
    if(root1==root2)
    {
        printf("Equal Real: %.2lf , %.2lf",root1,root2);
    }
    else{
        printf("Distinct Real : %.2lf , %.2lf",root1,root2);
    }
  }

  return 0;
}
