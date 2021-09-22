//Write a program to input 5 integer values in an array and display them.
#include<stdio.h>

int main()
{
    int number[5],i;
    for(i=0;i<=4;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&number[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("The input numbers are %d\n",number[i]);
    }
    return 0;

}