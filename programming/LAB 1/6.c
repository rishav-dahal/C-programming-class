#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    double r,a,circ; /*a=area circ=circumference r=radius*/
    printf("Enter Radius of circle:");
    scanf("%lf",&r);
    a=PI*pow(r,2), circ=2*PI*r;
    printf("The area of circle is %lf and /n circumference is %lf",a,circ);
    return 0;

}
