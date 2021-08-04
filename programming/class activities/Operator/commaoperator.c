#include<stdio.h>

int main()
{

    int a,b,c;
    printf("The adress of a=%p",&a);
    printf("The size of a is %d bytes \n\n\n",sizeof(a));
    c=(printf("Enter 2 number"),scanf("%d%d",&a,&b),a+b);
    printf("The value is %d",c);
    return 0;
}