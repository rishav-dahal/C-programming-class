#include<stdio.h>

int main ()
    {
        int num1;
        printf("Enter a number");
        scanf("%d",&num1);
        if(num1>15)        
        {
            if(num1%3==0)
            {
                printf("Number is greater than 15 and disible by 3");
                if(num1%5==0)
                {
                    printf("The number is grater than 15 and disible by 3 and 5");
                }
                else
                {
                    printf("The number is grater than 15 disible by 3 but not disible by 5");
                }
            }
            else
            {
                printf("The mumber is greater than 15 but not disisble by 3 and 5");
            }
        }
        else
        {
            if(num1%3==0)
            {
                printf("Number is less than 15 and disible by 3");
                if(num1%5==0)
                {
                    printf("The number is less than 15 and disible by 3 and 5");
                }
                else
                {
                    printf("The number is less than 15  and disible by 3 but not disible by 5");
                }
            }
            else
            {
                printf("The mumber is less than 15 and not disisble by 3 and 5");
            }
        }
        return 0;
    }
