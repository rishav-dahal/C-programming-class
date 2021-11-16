#include<stdio.h>

int main()
{
    int i,j,n;
    char a[50],temp;
    printf("Enter the no of element:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf(" %c",&a[i]);
    }
    for (i=0;i<=n-2;i++)
    {
        for (j=0;j<=n-2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
                
    }
    printf("Array in ascending order:");
    for(j=0; j<=n-1; j++)
    {
        printf("%c ",a[j]);
    }
    return 0;
}

