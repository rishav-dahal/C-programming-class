#include<stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i); /*put i for same row and different column
                             put j for same column and different row*/
        }
        printf("\n");
    }
    return 0;
}
