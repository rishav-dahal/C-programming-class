#include<stdio.h>

int main()
{
    int a;
    printf("Input number between 1 to 7:");
    scanf("%d",&a);

     if(a==1)
    {
         printf("1st day of week is Sunday"); 
    }
    else if(a==2)
    {
         printf("2nd day of week is Monday"); 
    } 
    
    else if(a==3)
    {
         printf("3rd day of week is Tuesday\n"); 
    } 
    
    else if(a==4)
    {
         printf("4th day of week is Wednesday"); 
    } 
    else if(a==5)
    {
         printf("5th day of week is Thursday"); 
    } 
    else if(a==6)
    {
         printf("6th day of week is Friday\n"); 
    }
   
    else 
    {
         printf("7th day of week is Saturday"); 
    }
    return 0;
}