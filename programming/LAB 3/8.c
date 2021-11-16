#include<stdio.h>

int main()
{
    float a,amount;
    printf("Enter consumed electric unit:");
    scanf("%f",&a);
    if(a<=100)
    {
        amount=a*40+50;
    }
    else if(a<=300 && a>100)
    {
        amount=100*40+(a-100)*50+50; 
    }
    else
    {
        amount=100*40+200*50+(a-300)*60+50;   
    }
    printf("unit consumed is %f and total charge is Rs.%f",a,amount);
    return 0;
}