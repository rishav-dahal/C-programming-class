#include<stdio.h>

int main()
{
    int i,sum=0,number;
    printf("Enter a number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        sum=sum+i;
        
    }
    printf("sum=%d",sum);
    return 0;
}