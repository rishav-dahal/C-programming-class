#include<stdio.h>
int main()
{
	int age;
	char status, gender;
	printf("Enter y if married and n if unmarried:\n");
	scanf("%c", &status);
	if(status=='y')
	{
		printf("Eligible for insurance");
	}
	else
	{	
		printf("Enter m if male and f if female:");
		scanf("%c", &gender);
	    printf("Enter the age:\n");
	    scanf("%d", &age);
	          if(gender=='m')
	          {
	          	if (age>30)
	          	{
	          		printf("Eligible for insurance");
			    }
                else
		        {
			        printf("Not eligible for insurance");
		        }

		      }
		      else
              {		      {
			    if (age>25)
			    {
				    printf("Eligible for insurance");
			    }
                else
                {
          	        printf("Not eligible for insurance");
	           }
    }
	return 0;
	
}