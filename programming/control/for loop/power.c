#include<stdio.h>

int main()
{
    int a,b,ans,counter=1;
    printf("program to find power of number");
    printf("Input base");
    scanf("%d",&a);
    printf("Input power");
    scanf("%d",&b);
    for (ans=1;counter<=b;counter++)
    {
        ans=ans*a;
    }
    printf("%d power of %d is %d",b,a,ans);
    return 0;
}