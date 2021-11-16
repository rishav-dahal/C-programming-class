#include<stdio.h>

int main()
{
    int t1,t2,next_term,n,i;
    t1=0;
    t2=1;
    printf("Enter the terms of fibinacci sequence to be generated:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {    
            printf("%d\n",t1);
            next_term=t1;
        }
        else if(i==2)
        {
            printf("%d\t",t2);
            next_term=t2
        }
        else
        {
            next_term=t1+t2;
            printf("%d\t",next_term);
            t1=t2;
            t2=next_term;
        }
        
    }
    printf("\n%d terms of fibinacci sequence is %d"n,next_term)
    return 0;
}