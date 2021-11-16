#include<stdio.h>
int main()
{
    int i,j,a[10][10],c,r,even=0,odd=0;
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
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
           if(a[i][j]%2==0)
           {
               even+=a[i][j];
           }
           else
           {
               odd+=a[i][j];
           }
        }
        printf("\n");
    }
    printf("Sum of Even number is %d\n",even);
    printf("Sum of odd number is %d",odd);
    return 0;
}