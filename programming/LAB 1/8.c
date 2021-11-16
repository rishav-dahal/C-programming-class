#include<stdio.h>

int main()
{
    double C,F; /*C= Centigrade and F= Fahrenheit*/
    printf("Enter temperature in Centigrade:");
    scanf("%lf",&C);
    F=1.8*C+32;
    printf("%lf Centigrade is %lf Fahrenheit",C,F);
    return 0;

}
