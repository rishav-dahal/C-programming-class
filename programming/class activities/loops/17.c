#include<stdio.h>

int main()
{
    int i,j,rows,counter=1,d;
    printf("Enter no of rows:");
    scanf("%d",&rows);
    d=rows/2;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(rows/2!=0)
            {
                if(j<=rows-d)
                {
                    printf("%d\t",counter);
                    
                }
                else
                {
                    counter=counter-2;
                    printf("%d\t",counter);
                    
                }
            }
            else
            {
                if(j<=rows-d)
                {
                    printf("%d\t",counter);
                    
                }
                else if(j==d+1)
                {
                    printf("%d\t",counter-1);
                    counter--;
                }
                else
                {
                    counter=counter-2;
                    printf("%d\t",counter);
                    
                }
            }
            counter++;
            
            
        }
        counter=counter+2;
        printf("\n");

    }
}