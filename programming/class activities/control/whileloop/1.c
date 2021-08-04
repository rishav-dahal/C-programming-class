#include<stdio.h>

int main()
{
    int number=20;
    while(number<=200)
    {
        if(number%5==0)
        {
            printf("Number divisible by 5 is =%d \n\n",number);
        }
        number++;
    }
    return 0;
}