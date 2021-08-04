//A program to calculate factorial
#include<stdio.h>

int main()
{
int num,a=1,b;
printf("Enter a number:");
scanf("%d",&num);
b=num;
while(num!=0)
{
    a=a*num;
    num--;
}
printf("%d is the factorial of %d",a,b);
return 0;

}