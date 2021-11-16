#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("you have entred 1.\n\n");
                break;
        case 2:printf("you have entred 2.\n\n");
                break;
        case 3:printf("you have entred 3.\n\n");
                break;
        default :printf("enter a valid number.\n\n");
    }
    return 0;
}