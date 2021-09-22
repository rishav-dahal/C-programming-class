//program to find maximum and minimum element in an array:
#include<stdio.h>
#include<conio.h>
int main()
{
    int array[20],large,small ;
    int n , i ,min=0 , max=0; /*max and min must be initialized zero at first because the maximum and minimum element can be in zero index also. that is the reason behind getting garbage value in index when the maximum and minimum value was the first element*/
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d data values of array: \n",n);
    for(i=0;i<=n-1;i++)
    {
        printf("\narray[%d]=",i);
        scanf("%d",&array[i]);
    }
    printf("\n\nThe array is :");
    for(i=0;i<=n-1;i++)
    {
        printf("\t%d",array[i]);
    }
    printf("\n\n");
    //find smallest element in array
    //find largest element in array
    small=array[0];

 
    for(i=1;i<=n-1;i++)
    {
        if(small>array[i])
        {
            small=array[i];
            min=i;
        }
    }
    printf("\n\nmin=%d\n\n\n",min);
    printf("\n\n\nSmallest element is array[%d] = %d",min,small);
    large=array[0];
    for(i=1;i<=n-1;i++)
    {
        if(large<array[i])
        {
            large=array[i];
            max=i;
        }
    }
    printf("\n\nmax=%d\n\n\n",max);
    printf("\n\n\nlargest element is array[%d] = %d",max,large);
    return 0;
}