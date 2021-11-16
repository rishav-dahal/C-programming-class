#include<stdio.h>
#include<math.h>
int main()
{
    int a[20][20],i,j,r1,c1,ans[10][10];
    printf("Enter row and column size of  matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter %d values for first matrix: \n",r1*c1);
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //3 power raised 
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
           ans[i][j]=pow(a[i][j],3);
        }

    }
    printf("\n\nThe 3 power raised to entered matrix is:\n");
    for(i=0;i<=r1-1;i++)
    {
        for(j=0;j<=c1-1;j++)
        {
            printf("%d\t",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}