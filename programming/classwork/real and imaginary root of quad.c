#include<stdio.h>
#include<math.h>
int main ()
    {
        double a,b,c,r,x,y;
        printf("Enter the value of a,b and c");
        scanf("%lf%lf%lf",&a,&b,&c);
        r=pow(b,2)-4*a*c;
        x=(-b+pow(pow(b,2)-4*a*c,0.5))/(2*a);
        y=(-b-pow(pow(b,2)-4*a*c,0.5))/(2*a);
      
        if(r>0)
        {
            printf("roots are real ");
            printf("roots are %lf and %lf",x,y);

        }
        else
        {
            printf("root are imaginary");
        }
        return 0;
    }