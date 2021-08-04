#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,r,x,y,result;
    printf("Enter the value of a,b and c");
    scanf("%lf%lf%lf",&a,&b,&c);
    r=pow(b,2)-4*a*c;
    x=(-b+pow(pow(b,2)-4*a*c,0.5))/(2*a);
    y=(-b-pow(pow(b,2)-4*a*c,0.5))/(2*a);
    (r>0)? ((r==0)? printf("Roots are real and equal \n so roots are %lf,%lf",x,y) : printf(
    "Roots are real and unequal \n so roots are %lf,%lf",x,y)) : printf("Roots are complex");
    return 0;

}