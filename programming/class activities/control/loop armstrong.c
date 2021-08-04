#include<stdio.h>
#include<math.h>

int main ()
{
    int number,sum,rem,num;
    
    for(number=1000;number<=100000000000;number++)
    {
       num=number;
       sum=0;
       while(num!=0)
       {
            rem=num%10;
            sum=sum+pow(rem,3);
            num=num/10;
       }
   
        if(sum==number)
        {
            printf("\n%d is armstrong number",number);
        }
    }    
    return 0;
}
















