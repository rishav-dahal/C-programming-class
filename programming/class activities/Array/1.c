#include<stdio.h>

int main()
{
    int number[5],i;
    for(i=0;i<=4;i++)
    {
        scanf("Enter a nummber:%d",&number[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("The input numbers are %d\n",number[i]);
    }
    return 0;

}