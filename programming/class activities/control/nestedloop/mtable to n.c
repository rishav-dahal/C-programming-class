#include<stdio.h>

int main()
{
    int number,n,i;
    printf("Enter number till where you want your multiplication table:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            printf("Table for %d\n",i);
            for(number=1;number<=10;number++)
            {
            
                printf("%d * %d = %d\n",i,number,number*i);
            }
        }
    }
return 0;
}