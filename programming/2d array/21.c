#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],i,j,r1,r2,c1,c2,diff[10][10];
    printf("Enter row and column size of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter row and column size of second matrix: ");
    scanf("%d%d",&r2,&c2);
    if(c1!=c2 || r1!=r2)
    {
        printf("\nMatrix addition is not possible.");
        exit(0);
    }
    printf("\nEnter %d values for first matrix: \n",r1*c1);
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter %d values for second matrix: \n",r2*c2);
    for(i=0;i<=r2-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //matrix subtraction
    for(i=0;i<=r1-1;i++)
    {
        diff[i][j]=0;
        for(j=0;j<=c1-1;j++)
        {
            diff[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\n\nThe sum of two matrix is:\n");
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}