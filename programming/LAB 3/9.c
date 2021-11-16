#include<stdio.h>

int main()
{
    float a,amount,charge;
    printf("Enter consumed electric unit:");
    scanf("%f",&a);
    if(a<=20)
    {
        amount=80+5/100*+50;
        
    }
    else if(a<=100)
    {
        charge=80+(a-20)*7.5+50;
        amount=charge+0.05*charge;
       
    }
    else if(a<=200)
    {
        charge=80+80*7.5+(a-100)*8.5+50;
        amount=charge+0.05*charge;
        
    }
    else
    {
        charge=80+80*7.5+100*8.5+(a-200)*9.5+50;
        amount=charge+0.05*charge;
        
    }
    printf("unit consumed is %f and total charge is Rs.%f",a,amount);
    return 0;
}