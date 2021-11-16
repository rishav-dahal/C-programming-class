#include<stdio.h>

int main()
{
    int a[20],b[20],i,n;
    printf("Enter the no  of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
        printf("a[%d]=%d\n",i,a[i]);
        printf("b[%d]=%d\n",i,b[i]);
    
    }
    return 0;

}