#include<stdio.h>

int main()
{
    int number[50],i,n,sumeven=0,sumodd=0;
    printf("Enter the no of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++)
    {
        if(number[i]%2==0)
        {
            sumeven=sumeven+number[i]; 
        }
        else
        {
            sumodd=sumodd+number[i]; 
        }
    }
    printf("sum of even number is %d\n",sumeven);
    printf("sum of odd number is %d",sumodd);
    return 0;
}