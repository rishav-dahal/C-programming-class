#include<stdio.h>

int main()
{
    int a,b,sum,diff,prod;
    printf("Enter Two number:");
    scanf("%d%d",&a,&b);
    sum=a+b,diff=a-b,prod=a*b;
    printf("The sum of %d and %d is %d ,difference is %d and product is %d ",a,b,sum,diff,prod);
    return 0;

}
