
#include <stdio.h>

int main()
{
    int i,j,rows,t=0,p=0,e;
    printf("Enter no of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            e=(p%2==0)?0:t;
            printf("%d",e);
            p++;
            if(e==t)
            {t++;}
            
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