#include<stdio.h>
#include<math.h>

int main()
{
    int num,rate,total=0;
    char decision;   
    while(1)
    {
        printf("Order your Food\n");
        printf("****MENU****\n1.MOMO----------Rs.250\n2.Pizza----------Rs.450\n3.CFC----------Rs.500\n4.Coffee----------Rs.300\n");
        printf("what do you want to order:");
        scanf("%d",&num);
        rate=0;
        up:
        switch (num)
        {
            case 1:printf("MOMO");
                    rate=250;
                    break;
            case 2:printf("PIZZA");
                    rate=450;
                    break;
            case 3:printf("CFC");
                    rate=500;
                    break;
            case 4:printf("Coffee");
                    rate=300;
                    break;
            default :printf("Enter a valid order");
            goto up;
           

        }
        total=total+rate;
        printf("\nDo you want to repeate Enter 'y' for yes and 'n' for no\n");
        scanf(" %c",&decision);
        if(decision=='n' || decision=='N')
        {
        printf("your total is :%d",total);
        break;
        }

    }
    return 0;
}