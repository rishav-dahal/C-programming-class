#include<stdio.h>

int main ()
    {
        int num1,num2,num3;
        printf("Enter three number:");
        scanf("%d%d%d",&num1,&num2,&num3);
        (num1>num2 && num1>num3)? printf("%d is maximum among %d ,%d and %d\n",num1,num1,num2,num3):
        ((num2>num3)?printf("%d is maximum among %d, %d and %d\n",num2,num1,num2,num3):
        printf("%d is maxumum among %d ,%d and %d\n",num3,num1,num2,num3));
        return 0;
    }
