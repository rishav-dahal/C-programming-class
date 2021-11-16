#include<stdio.h>
int main()
{
    int i,j,a[10][10],c=4,r=3;
    printf("Enter the %d value for 3*4 order matrix\n",c*r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}