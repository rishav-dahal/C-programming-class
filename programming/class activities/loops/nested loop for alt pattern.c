#include<stdio.h>

int main()
{
    int counth,countv,column,row,character,saving;
    printf("pick a number for pattern:");
    scanf("%d",&character);
    printf("Enter the no of row:");
    scanf("%d",&row);
    printf("Enter the no of column:");
    scanf("%d",&column);
    printf("printing pattern of %d in increasing order\n",character);
    saving=character;
    for(countv=1;countv<=row;countv++)
    {
        for(counth=1;counth<=column;counth++)
        {
            printf("%d",character);
            character++;
            
        }
        printf("\n");
        character=saving;
    }
    return 0;
}
