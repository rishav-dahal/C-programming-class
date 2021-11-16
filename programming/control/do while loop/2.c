/*write a program to display odd number from n1 ton2 where
 n1 and n2 are number given by the user where n2>n1*/

#include<stdio.h>

int main()
{
    int n1,n2;
    do
    {
        printf("Enter the range to check for odd number:");
        scanf("%d%d",&n1,&n2);
    }while(n1>n2);
    
    while (n1<=n2)
    {
        if(n1%2!=0)
        {
            printf("%d\t",n1);
        }
        n1++;
    }
    return 0;
    
}