#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,r1=3,r2=3,c1=3,c2=3,result[3][3],k;
    printf("\nEnter %d values for first 3*3 matrix: \n",r1*c1);
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter %d values for second 3*3 matrix: \n",r2*c2);
    for(i=0;i<=r2-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\nThe first matrix is : \n");
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe second matrix is : \n");
    for(i=0;i<=r2-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //matrix multiplication
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            result[i][j]=0;
            for(k=0;k<=c1-1;k++)
            {
                result[i][j]= result[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("\n\nThe resultant matrix is:\n");
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c2-1;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}