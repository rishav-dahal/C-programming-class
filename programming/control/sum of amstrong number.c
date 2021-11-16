//if the sum of cube of given digit is equal to given number then it is amstrong number.
/* algorithm of armstrong number

start
input number 
assign num=number and sum=0
check if num!=0
isolate last digit of number using modulus operator remainder=num%10
calculate cube of reminder and add them sum=sum+remainder*remainder*remainder
removelast digit from the number num=num/10 
repeate step 4 to step 8 until the condition is true else got to step 9
check if (number==sum)
if condition in step 9 is true display Armstrong number
Ifcondition in step 9 is false,display not Armstrong number
stop
*/

#include<stdio.h>
#include<math.h>

int main ()
{
    int a,sum=0,rem,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        rem=a%10;
        sum=sum+pow(rem,3);
        a=a/10;
    }

    if(b==sum)
    {
        printf("\n%d is armstrong number",b);
    }
    else
    {
        printf("\n%d is not armstrong number",b);
    }
    
    return 0;
}
















