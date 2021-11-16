//logic correction required
#include<stdio.h>
int main()
{
    int a[20][20],i,j,r,c,total=0;
    printf("Enter row and column size of first matrix: ");
    scanf("%d%d",&r,&c);
    printf("\nEnter %d values for first matrix: \n",r*c);
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("The matrix is:\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //major diagonal addition
    printf("\n\nThe sum of major diagonal of matrix is:\n");
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            if(i==j)
            {
               total+=a[i][j];
            }
        }
        printf("\n");
    }
    printf("%d\t",total);
    return 0;
}