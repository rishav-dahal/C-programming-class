#include<stdio.h>

int main()
{
    int i,j,rows,p=65;
    printf("Enter the no of Rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",p);
            p++;
        }
        printf("\n");
    }
    return 0;
}