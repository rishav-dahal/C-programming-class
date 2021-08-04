/*write a program raise number X to power n i.e.X^n*/
#include<stdio.h>
#include<math.h>

int main()
{
    int i,power,number,result=1;
    printf("Enter a number:");
    scanf("%d",&number);
     printf("Enter power:");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        result=result*number;
        
    }
    printf("sum=%d",result);
    return 0;
}