#include<stdio.h>

int main()
{

    int a,b,c;
    printf("Enter tthree number: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n\nThe truth value is: %d\n\n\n",a>b || a>c);
    return 0;
}