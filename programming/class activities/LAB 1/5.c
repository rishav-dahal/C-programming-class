#include<stdio.h>
#include<math.h>
#define PI 3.14

int main()
{
    double r,sa,v; /*sa=Surface area v=volume r=radius*/
    printf("Enter Radius of Sphere:");
    scanf("%lf",&r);
    sa=4*PI*pow(r,2),v=4/3*PI*pow(r,3);
    printf("The surface area of sphere is %lf and /n circumference is %lf",sa,v);
    return 0;

}
