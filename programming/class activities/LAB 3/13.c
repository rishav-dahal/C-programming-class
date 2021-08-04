#include<stdio.h>
int main()
{
    char a,lowercase,uppercase;
    printf("Enter Alphabet:");
    scanf("%c",&a);
    if (a>='A' && a<='Z')
    {
        lowercase=a+32;
        printf("lowercase=%c",lowercase);
    }
    else
    {
        uppercase=a-32;
        printf("uppercase=%c",uppercase);
    }
    return 0;
}
    