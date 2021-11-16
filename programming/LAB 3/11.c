/*11. A company does insurance of the driver in following cases
a. If the driver is married
b. If the driver is unmarried male and above 30 years of age
c. If the driver is unmarried female and above 25 years of age*/

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
       if(gender=='m')
       {
           if(age>30)
           {
               printf("Your are eligible for insurance");
           }
           else
           {
               printf("Your are not eligible for insurance");
           }
       }
       else
       {
           if(age>25)
            {
               printf("Your are eligible for insurance");
           }
           else
           {
               printf("Your are not eligible for insurance");
           }

       }
   }
   return 0;
}