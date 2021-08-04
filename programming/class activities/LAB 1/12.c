#include<stdio.h>

int main()
{
    int a,kg,gm;
    printf("Enter weight is grams:");
    scanf("%d",&a);
    kg=a/1000;
    gm=a%1000;
    printf("%d gram is equal to %d kilogram and %d gram",a,kg,gm);
    return 0;
    
}