#include<stdio.h>

int main()
{
    int hrs,min,sec,a;
    printf("Enter time in second:");
    scanf("%d",&a);
    hrs=a/3600;
    min=(a%3600)/60;
    sec=(a%3600)%60;
    printf("%d sec equals to %d hours %d minutes and %d sec\n",a,hrs,min,sec);
    return 0;
}