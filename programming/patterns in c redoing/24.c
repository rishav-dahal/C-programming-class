#include<stdio.h>

int main()
{
    int i,j,rows,p=4;
    printf("Enter the no of Rows:");
    scanf("%d",&rows);
    
    for(i=rows;i>=1;i--)
    {
        for (j=1;j<=rows-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i+p;j++)
        {
            printf("* ");
        }
        p--;
        printf("\n");
    }
}