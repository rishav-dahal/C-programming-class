#include<stdio.h>

int main()
{
    int i,j,per[50],n,temp;
    printf("Enter the no of students:");
    scanf("%d",&n);
    printf("Enter the  students percentage:\n");
    for(i=0;i<n-1;i++)
    {
        printf("Per[%d]=",i);
        scanf("/n%d",&per[i]);
    }
    for (i=0;i<=n-2;i++)
    {
        for (j=0;j<=n-2-i;j++)
        {
            if(per[j]>per[j+1])
            {
                temp=per[j];
                per[j]=per[j+1];
                per[j+1]=temp;
            }
        }
                
    }
    printf("The percentage in ascending order:");
    for(j=0; j<=n-1; j++)
    {
        printf("%d ",per[j]);
    }
    return 0;
}

