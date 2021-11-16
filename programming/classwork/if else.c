#include<stdio.h>

int main ()
    {
        int num1;
        printf("Enter a number");
        scanf("%d",&num1);
        if(((num1>15) && (num1%3==0) && (num1%5==0)))
        {
            printf("Number is greater than 15 and disible by5 and 3 ");


        }
        else
        {
            printf("Number is not disible by 5 and 3");
        }
        return 0;
    }
