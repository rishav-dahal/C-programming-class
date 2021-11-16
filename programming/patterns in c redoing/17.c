#include<stdio.h>

int main()
{
    int i,j,rows,p=1;
    printf("Enter the no of Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("0");
            }
            else
            {
                printf("%d",p);
                p++;
            }
        }
        printf("\n");
    }
    return 0;
}