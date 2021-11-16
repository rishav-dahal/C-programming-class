//Write a program to input n element in an array and display them inreverse order.
#include<stdio.h>

int main()
{
    int number[20],i,n;
    printf("Enter the no  of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&number[i]);
    }
    for(i=n-1;i>0;i--)
    {
        printf("The input numbers are number[%d]=%d\n",i,number[i]);
    }
    return 0;

}