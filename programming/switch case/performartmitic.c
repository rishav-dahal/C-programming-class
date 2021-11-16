#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,up;
    char operation,decision;
    while(1)
    {
        printf("Enter two number");
        scanf("%f%f",&a,&b);
        up:
        printf("Enter the following to perform task\nAdd:+\nsubtract:-\nproduct:*\ndivision:/\nsquare:s\ncube:c\n");
        scanf("\n %c",&operation);
        switch (operation)
        {
            case '+':printf("sum is %f",a+b);
                    break;
            case '-':printf("Difference is %f",a-b);
                    break;
            case '*':printf("Product is %f",a*b);
                    break;
            case '/':printf("division is %f",a/b);
                    break;
            case 's':printf("Square of entred number are  %f and %f",pow(a,2),pow(b,2));
                    break;
            case 'c':printf("cube of entered number are %f and %f",pow(a,3),pow(b,3));
                    break;
            default :printf("Enter the valid operation\n");
                    goto up;

        }
        printf("\nDo you want to repeate Enter 'y' for yes and 'n' for no\n");
        scanf(" %c",&decision);
        if(decision=='n' || decision=='N')
        break;

    }
    return 0;
}