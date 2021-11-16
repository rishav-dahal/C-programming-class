#include<stdio.h>

int main()
{
    int c,b,d,result;
    printf("Enter the value for c");
    scanf("%d",&c);
    printf("Enter the value for b");
    scanf("%d",&b);
    printf("Enter the value for d");
    scanf("%d",&d);
    result=(c*b*3)/(d*2);
    printf("The result is:%d",result);
    return 0;

}