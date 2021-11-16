#include<stdio.h>

int main()
{
    int a;
    int *ptr;
    ptr=&a;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("the address of a indirectly%d\n",ptr);
    *ptr=100;
    printf("The value of a directly%d\n",a);
    printf("Address of pointer is %d\n",&ptr);
    printf("The address of a is %d\n",&a);
    printf("The value of a=%d",*(&a));
    return 0;
}