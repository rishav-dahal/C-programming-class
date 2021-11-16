#include<stdio.h>

int main()
{
    int number[50],i,n,positive=0,negative=0,zero=0;
    printf("Enter the no of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++)
    {
        if(number[i]>0)
        {
            positive++;
        }
        else if(number[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Number of positive number is %d\n",positive);
    printf("Number of negative number is is %d\n",negative);
    printf("NUmber of zero is %d",zero);

    return 0;
}