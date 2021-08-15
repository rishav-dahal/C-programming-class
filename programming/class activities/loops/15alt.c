#include <stdio.h>

int main()
{
    int i,j,rows,p=0;
    printf("Enter no of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",p%2);
            p++;
        }
         if(i%2==0)
            {
               p=0;
            }
            else
            {
                p=1;
            }     

        printf("\n");
    }

    return 0;
}