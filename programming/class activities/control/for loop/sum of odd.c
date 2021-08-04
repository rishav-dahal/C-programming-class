#include<stdio.h>

int main()
{
    int i,sum=0,number;
    printf("Enter a number:");
    scanf("%d",&number);
    for(i=1;i<=2*number-1;i++)/*i=i+2*/
    {
       if(i%2!=0)
       {
           sum=sum+i;
       }
        
    }
    printf("sum=%d",sum);
    return 0;
}