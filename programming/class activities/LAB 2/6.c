#include<stdio.h>
#include<math.h>

int main ()
{
    double fheight,iheight,mheight,weight,ratio;
    printf("Enter height in feet.inches:");
    scanf("%lf",&fheight);
    printf("Enter weight in Kg:");
    scanf("%lf",&weight);
    iheight=fheight*12;
    mheight=iheight*0.0254;
    ratio=weight/(pow(mheight,2));
    printf("the ratio of weight to height square is:%lf\n",ratio);
    return 0;
}