#include<stdio.h>

int main()
{
    int a[10],i,n,year,flag=0;
    printf("Enter the no of data you want to store:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        year=a[i];
        if(year%400==0 || year%4==0)
        {
            printf("%d is leap year\n",year);
            flag=1;
        }
       
    }
    if(flag==0)
    {
        printf("There are no leap year in input data");
    }
    return 0;
}