#include<stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter the no of Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(i==j)
            {
                printf("0");
            }
            else
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}