#include<stdio.h>

int main()
{
    int number,n1,n2,i,count=0;
    printf("Enter the range");
    scanf("%d%d",&n1,&n2);
    for(number=n1;number<=n2;number++)
    {
        count=0;
        for(i=1;i<=number;i++)
        {
            if(number%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("\t%d\t",number);
        }
    }   
return 0;
}
