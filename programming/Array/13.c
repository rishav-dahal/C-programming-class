#include <stdio.h>

int main(void)
{
    int arr[10];
    int size, i, j, prime,primeCount=0,k,index[10];

    // ask for the size of the array
    printf("Give the number of elements for the array (max is 10): ");
    scanf("%d", &size);
    printf("\n\n");

    // populate the first array while copying it to the second one in reverse
    // order
    for (i = 0; i < size; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // display the prime elements
    printf("\nThe elements that are prime are ", size);
     k=0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            // if the element is 1 then don't even bother
            continue;
        }
        else
        {
            prime = 1; // let's assume prime by default
            for (j = 2; j < arr[i]; j++)
            {
                if ((arr[i] % j) == 0)
                {
                    // if that number is divisible, then it's not a prime so we can
                    // exit
                    prime = 0;
                    break;
                }
               
            }
            if (prime == 1)
            {
               // printf("%d, ", arr[i]);
               index[k]=i;
                primeCount++;
                k++;
            }
        }
    }
           for(k=0;k<=primeCount-1;k++)
           {
               if(k<primeCount-1)
               {
                   printf("%d,",arr[index[k]]);   
            }
               else
                   printf("%d.",arr[index[k]]);
            }
           
   
   
    printf("\n");
    return 0;
}