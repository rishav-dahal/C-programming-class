#include<stdio.h>
int main()
{
    int i,j,a[10][10],c,r;
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
    printf("The matrix is:\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[i][j]*12);
        }
        printf("\n");
    }
    return 0;
}