#include<stdio.h>

int main()
{
    int num1,a,counter;
    counter=1;
    printf("Enter a number to generate its multipilication table:");
    scanf("%d",&num1);
    printf("Enter your range:");
    scanf("%d",&a);
    while(counter<=a)
    {
        printf("%d * %d = %d\n\n",num1,counter,num1*counter);
        counter++;
    }
    return 0;

}