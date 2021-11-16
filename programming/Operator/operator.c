#include<stdio.h>

int main()
{
    int a,b,result;
    /*float a,b,result;*/
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter another number");
    scanf("%d",&b);
    /*printf("Enter a number");
    scanf("%f",&a);
    printf("Enter another number");
    scanf("%f",&b);*/
    /*result= +a;
    printf("\nThe result is %d",result);*/ //this is uniary operator
    /*result= a-b+100;
    printf("\nThe result is %d",result);*/ //for binary
    /*result= a/b;
    printf("\nThe result is %f",result);*/
    /*result= a%b;
    printf("\nThe result is %d",result);*///it can only be use in int 
    /*a+=b;
    printf("\nThe result is %d",a);*/ //assigment operator
    result= a%b;
    printf("\nThe result is %d",result);
    return 0;
}
//type cast use garna xai result=(float)(a)/b;
//we can use a*1.0 to convert int intofloat