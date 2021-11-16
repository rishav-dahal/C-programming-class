#include<stdio.h>

int main()
{
    double P,V,m,T;
    printf("Enter Pressure:");
    scanf("%lf",&P);
    printf("Enter Volume:");
    scanf("%lf",&V);
    printf("Enter Temperature:");
    scanf("%lf",&T);
    m=(P*V)/(0.37*(T+460));
    printf("The mass is %lf",m);
    return 0;

}