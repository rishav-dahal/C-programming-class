#include<stdio.h>
#include<string.h>

int main()
{
    char name[50][30],temp[30];
    int num,i,j;
    printf("Enter the number of string you want:");
    scanf("%d",&num);
    for(i=0;i<=num-1;i++)
    {
        gets(strupr(name[i]));
    }
    for (i=0;i<=num-1;i++)
    {
        for(j=0;j<=num-2;j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    printf("The sorted string of array are:");
    for(i=0;i<=num-1;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}