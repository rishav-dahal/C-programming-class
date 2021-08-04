#include <stdio.h>

int main()
{
    /*P=principle T=time R=rate A=amount I=interest*/
    double P, T, R, I, A;
    printf("Enter Principle:");
    scanf("%lf", &P);
    printf("Enter Time:");
    scanf("%lf", &T);
    printf("Enter Rate:");
    scanf("%lf", &R);
    I = (P * T * R) / 100, A = I + P;
    printf("The Interest is %lf and Total amount is %lf", I, A);
    return 0;
}
