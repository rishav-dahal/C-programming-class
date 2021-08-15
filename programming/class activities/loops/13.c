#include<stdio.h>

int main()
{
    int i,j,rows,p;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    p=rows;
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=i;j--)
        {
            printf("%d ",p);
            p--;
        }
        p=rows-i;
        printf("\n");
    }

    return 0;
}
