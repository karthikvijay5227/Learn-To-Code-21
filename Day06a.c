/*WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >=90% :
Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% :
Grade E Percentage < 40% : Grade F*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float per=((a+b+c))/3;
    printf("%.2f\n",per);
    if(per>=90)
    {
        printf("A");
    
    }
    else if(per>=80)
    {
        printf("B");
    }
    else if(per>=70)
    {
        printf("C");
    }
    else if(per>=60)
    {
        printf("D");
    }
    else if(per>=40)
    {
        printf("E");
    }
    else{
        printf("F");
    }
    return 0;
}
