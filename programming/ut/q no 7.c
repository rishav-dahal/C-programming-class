#include<stdio.h>

int main()
{
    int a=5,b=10 ,c=1;
    a++;
    b--;
    c+=a+b*++a/b++%10;
    printf("final value of a=%d b=%d and c=%d",a,b,c);
    return 0;
}