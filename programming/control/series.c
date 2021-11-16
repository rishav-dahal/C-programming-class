#include<stdio.h>

int main()
{
    int t1,next_term,n,i;
    printf("Program to print first 10 terms of following series using loop\n1 5 9 13 is \n");
    t1=1;
    n=10;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("%d\t",t1);
        }
        else
        {
        next_term=t1+4;
        printf("%d\t",next_term);
        t1=next_term;
        }
    }
    return 0;
}