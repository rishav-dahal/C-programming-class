//write a program to check whether the given number is palandrome or not??
#include<stdio.h>
#include<math.h>

int main ()
{
    int rem,number,reverse=0,a;
    printf("Enter a number:");
    scanf("%d",&number);
    a=number;
    while(rem!=0) //we can use do while too
    {
        rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;
    }
    
    if(a==reverse)
    {
        printf("\n%d is palandrome number",a);
    }
    else
    {
        printf("\n%d is not palandrome number",a);
    }
    
    return 0;
}