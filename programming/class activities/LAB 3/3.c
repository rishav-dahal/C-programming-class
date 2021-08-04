#include<stdio.h>

int main ()
    {
        int a;
        printf("Enter a number:");
        scanf("%d",&a);
        if(a%2==0 && a%4==0 &&a%6==0)
        {
            printf("%d is divisible by 2,4,and 6",a);
        }
        else
        {
            printf("%d is not divisible by 2,4,and 6",a);
        }
        return 0;
    }
