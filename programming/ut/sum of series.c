#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,sign=-1,factorial=1;
    float x,sum=0,result;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of x:");
    scanf("%d",&x);

    for(i=2;i<(2*n);i=i+2)
    {
        factorial=factorial*i*(i-1);
        sum=(sum+(sign*pow(x,i)))/factorial;
        sign=sign*(-1);
        printf("%f",sum);
    }
    result=1+sum;
    printf("The sum of series  to %d is %f",n,result);
    return 0;
}
    
