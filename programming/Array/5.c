#include<stdio.h>

int main()
{
    int number[50],i;
    float n,sum=0,average;
    printf("Enter the no of element:");
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&number[i]);
        sum=sum+number[i];
    }
    printf("The average of %f number is %f",n,average=sum/n);
    return 0;
}