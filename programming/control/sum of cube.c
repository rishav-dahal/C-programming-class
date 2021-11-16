#include<stdio.h>
#include<math.h>

int main ()
{
    int a,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a!=0) //we can use do while too
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("\n%d",rev);
    return 0;
}