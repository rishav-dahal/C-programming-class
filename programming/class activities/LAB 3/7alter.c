
#include<stdio.h>

int main ()
    {
        int num1,num2,num3,num4;
        printf("Enter three number:");
        scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
        if(num1>num2 )
        {
            if(num1>num3) 
            {
                if(num1>num4)
                {
                   printf("%d is maximum than %d,%d and %d",num1,num2,num3,num4);
                }

                else 
                {
                    printf("%d is maximum than %d,%d and %d",num4,num1,num2,num3);
                }
            }
           else 
            {   
                if(num3>num4)
                {
                   printf("%d is maximum than %d,%d and %d",num3,num1,num2,num4);
                }

                else 
                {
                    printf("%d is maximum than %d,%d and %d",num4,num1,num2,num3);
                }
            } 
        }
        else 
        {
            if(num2>num3)
            {
                if(num2>num4)
                {
                     printf("%d is maximum than %d,%d and %d",num2,num1,num3,num4);
                }
                else
                {
                    printf("%d is maximum than %d,%d and %d",num4,num1,num2,num3);
                }
           
            }
            else 
            {
                if(num3>num4)
                {
                    printf("%d is maximum than %d,%d and %d",num3,num1,num2,num4);
                }
                else
                {
                    printf("%d is maximum than %d,%d and %d",num4,num1,num2,num3);
                }
            }
        }
        return 0;
    }
