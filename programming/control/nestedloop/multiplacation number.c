#include<stdio.h>

int main()
{
    int number,i,n2,n1,n=5;
    printf("Enter number till where you want your multiplication table:");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        printf("%d * %d = %d\n",n,i,i*n);
       /* for(number=n1;number<=n2;number++)
        {
            printf("%d * %d = %d\n",n,number,number*n);
        }*/
    }
return 0;
}