#include<stdio.h>

int main()
{
    char a;
    printf("Enter a character:");
    scanf("%c",&a);

    if (a>='A' && a<='Z')
    {
        printf("The input character is uppercase\n"); 
    }

    else if(a>='a' && a<='z')
    {
        printf("The input character is lower case\n");
    }

     else if(a>='1' && a<='9')
    {
        printf("The input character is Number\n");
    }
    
     else
    {
        printf("The input character is Special character\n");
    }

 return 0;
}