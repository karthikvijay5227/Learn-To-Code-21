//Write a C Program to compute the multiplication table of 1 - 5 using do-while, switch and for loop.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int ch,num;
    do{
        scanf("%d",&num);
        scanf("%d",&ch);
        switch(num)
        {
            case 1:printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   for(int i=1;i<=10;i++)
                   {
                     printf("%d",1*i);
                     printf(" ");
                   }
                   printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   break;
            case 2:printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   for(int i=1;i<=10;i++)
                   {
                     printf("%d",2*i);
                     printf(" ");
                   }
                   printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   break;
            case 3:printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   for(int i=1;i<=10;i++)
                   {
                     printf("%d",3*i);
                     printf(" ");
                   }
                   printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   break;
            case 4:printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   for(int i=1;i<=10;i++)
                   {
                     printf("%d",4*i);
                     printf(" ");
                   }
                   printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   break;
            case 5:printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   for(int i=1;i<=10;i++)
                   {
                     printf("%d",5*i);
                     printf(" ");
                   }
                   printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   break;
            case 6:printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                   break;
                
            default:printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                    printf("Enter a valid option!");
                    printf("\n1.Table of 1\n2.Table of 2\n3.Table of 3\n4.Table of 4\n5.Table of 5\n6.Exit\n");
                    exit(0);
        }
    }while(ch!=6);
    return 0;
}

