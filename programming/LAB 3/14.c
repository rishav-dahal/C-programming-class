#include<stdio.h>

int main()
{
    int num1,num2,swap;
    printf("Enter two number A and B:");
    scanf("%d%d",&num1,&num2);
    swap=num1;
    num1=num2;
    num2=swap;
    printf("you have entered A=%d B=%d and your ans is A=%d and b=%d\n",num2,num1,num1,num2);
    return 0;
}