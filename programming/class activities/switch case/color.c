#include<stdio.h>

int main()
{
    char color;
    printf("Enter R for red G for green B for blue and other reamining character\nfor Black:");
    scanf("%c",&color);
    switch (color)
    {
        case 'R':case 'r':printf("red");
        break;
        case 'G':case 'g':printf("green");
        break;
        case 'B':case 'b':printf("blue");
        break;
        default:printf("Black");
    }
    return 0;
}