#include<stdio.h>

int main()
{
    int i,j,rows,d=0,p=2;
    printf("Enter the no of Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j<=rows/2+1)
            {
                printf("%d\t",j+d);
            }
            else
            {
                printf("%d\t",j-p+d);
                p=p+2;
            }
        }
        p=2;
        d=d+3;
        printf("\n");
    }
    return 0;
}