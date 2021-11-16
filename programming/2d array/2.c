#include<stdio.h>
int main()
{
    int i,j,a[10][10],c,r,sum=0;
    printf("Enter the size of row and column:");
    scanf("%d%d",&r,&c);
    printf("Enter the %d value\n",c*r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("\nThe sum of number in matrix is:%d",sum);
    return 0;
}