#include<stdio.h>

int main()
{
    float a,amount;
    printf("Enter consumed electric unit:");
    scanf("%f",&a);
    if(a<=120)
    {
        amount=a*2;
    }
    else if(a<=250)
    {
        amount=120*2+(a-120)*4; 
    }
    else if(a<=400)
    {
        amount=120*2+130*4+(a-250)*8; 
    }
    else
    {
        amount=120*2+130*4+150*8+(a-400)*15;
    }
    printf("unit consumed is %f and total charge is Rs.%f",a,amount);
    return 0;
}