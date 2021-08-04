#include<stdio.h>

int main()
{
    float i,sum=0,number;
    printf("Enter a number:");
    scanf("%f",&number);
    for(i=1;i<=number;i++)
    {
        sum=sum+(1/i);
        
    }
    printf("sum=%f",sum);
    return 0;
}