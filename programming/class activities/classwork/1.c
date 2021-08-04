#include<stdio.h>

int main()
{
    int x,a;
    x=45;
    a= x++ + ++x;
    printf("The value of A is %d and x=%d",a,x);
    return 0;
}