#include<stdio.h>

int main()
{
    int counth,countv,column,row;
    char character;
    printf("pick a character or number for pattern:");
    scanf("%c",&character);
    printf("Enter the no of row:");
    scanf("%d",&row);
    printf("Enter the no of column:");
    scanf("%d",&column);
    printf("printing pattern of %c\n",character);
    for(countv=1;countv<=row;countv++)
    {
        for(counth=1;counth<=column;counth++)
        {
            printf("%c",character);
            
        }
        printf("\n");
    }
    return 0;
}
