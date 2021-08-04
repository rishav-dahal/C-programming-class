#include<stdio.h>

int main()
{
    int number,sum=0,rem;
    printf("input a number:");
    scanf("%d",&number);
    while(number!=0)
    {
        rem=number%10;
        sum=sum+rem;
        number=number/10
        
    }
}