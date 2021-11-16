#include<stdio.h>

int main()
{
   float a,b,c,d,e,f,g,percent;
    printf("Enter the marks for english:"); 
    scanf("%f",&a);
    printf("Enter the marks for Nepali:"); 
    scanf("%f",&b);
    printf("Enter the marks for maths:"); 
    scanf("%f",&c);
    printf("Enter the marks for science:"); 
    scanf("%f",&d);
    printf("Enter the marks for social:"); 
    scanf("%f",&e);
    printf("Enter the marks for computer:"); 
    scanf("%f",&f);
    printf("Enter the marks for EPH:"); 
    scanf("%f",&g);
    if(a>=45 && b>=45 && c>=45 && d>=45 && e>=45 && f>=45 && g>=45)
    {
        percent=(a+b+c+d+e+f+g)/700*100;
        if(percent>=80)
        {
            printf("Passed with distinction with %.2f",percent);
        }
        else if(percent>=60)
        {
            printf("Passed with first division with %.2f",percent);
        }
        else
        {
            printf("Passed with second division with %.2f",percent);
        }
    }
    else
    {
        printf("fail!! you have score less than 45 marks some subjects");
    }
    return 0;


}