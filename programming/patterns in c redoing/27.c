#include<stdio.h>

int main()
{
    int i,j,rows,p=65,q=1;
    printf("Enter the no of Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%d",q);
            }
            else
            {
                printf("%c",p);
            }
        }
        if(i%2==1)
            q++;
        else
            p++;
        printf("\n");
    }
    return 0;
}