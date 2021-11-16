#include<stdio.h>

int main()
{
    int i,sum=0,number;
    printf("Enter a number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
       if(i%5!=0)
       {
           sum=sum+i*5;
       }
        printf("%d",sum);
    }
    printf("sum=%d",sum);
    return 0;
}