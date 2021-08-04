#include<stdio.h>

int main()
{
   int age;
   char mstatus,gender;    
   printf("Enter m if you are married if not enter u:");
   scanf("\n%c",&mstatus);  
   if(mstatus=='m')
   {
       printf("You are eligible for insurance");
   }
   else
   {
       printf("Enter m if your male or f if you are female:");
       scanf("\n%c",&gender);
       printf("Enter your age:");
       scanf("\n%d",&age);
       if(gender=='m'&& age>30)
       {
        
           printf("Your are eligible for insurance");
       }
       else if(gender=='f' && age>25)
       {
          printf("Your are eligible for insurance");
       }
       else
       {
            printf("Your are not eligible for insurance");
       }
   }
   return 0;
}