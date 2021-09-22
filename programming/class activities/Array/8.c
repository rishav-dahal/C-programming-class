#include<stdio.h>

int main()
{
    int num1[5],num2[5],i,n;
    printf("input 10 element\n");
    for(i=0;i<5;i++)
    {
        printf("num1[%d]=",i);
        scanf("%d",&num1[i]);
        printf("num2[%d]=",i);
        scanf("%d",&num2[i]);
    }
    printf("Input numbers are:\n");
    for(i=0;i<5;i++)
    {
         printf("num1[%d]=%d\n",i,num1[i]);
         printf("num2[%d]=%d\n",i,num2[i]);
    }
    printf("sum of num1 and num2 are:\n");
    for(i=0;i<5;i++)
    {
         printf("num1[%d]+num1[%d]=%d\n",i,i,num1[i]+num2[i]);
    }
    return 0;
}