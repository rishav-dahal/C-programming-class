#include<stdio.h>
int main()
{
    int i,j,a[10][10],c,r,num,flag=0;
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
    printf("Enter a number to check if it is present in matrix :");
    scanf("%d",&num);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(num==a[i][j])
            {flag=1;}
        }
    }
    if(flag==1)
    printf("Entered number is present in matrix");
    else
    printf("Entered number is doesnt present in matrix");
    return 0;
}