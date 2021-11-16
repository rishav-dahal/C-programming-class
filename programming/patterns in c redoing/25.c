#include<stdio.h>

int main()
{
    int i,j,rows,p=0;
    printf("Enter the no of Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf("   ");
        }
        for(j=1;j<=i+p;j++)
        {
            printf("*  ");
        }
        p++;
        printf("\n");
    }
    for(i=rows;i>=1;i--)
    {
        if(i==5)
        continue;
        for (j=1;j<=rows-i;j++)
        {
            printf("   ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}