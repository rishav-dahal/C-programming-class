#include<stdio.h>
#include<math.h>

int main()
{
    int a[20],i,sum,n,rem=0,flag=0,array;
    printf("Enter the no  of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Number[%d]=",i);
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
       array=a[i];
        rem=0;
       sum=0;
       while(array!=0)
       {
            rem=array%10;
            sum=sum+pow(rem,3);
            array=array/10;   
       }
   
        if(sum==a[i])
        {
            printf("\n%d is armstrong number",sum);
            flag=1;
        }
    }  
    if(flag==0)
    {printf("There are no armstrong number in array");}
    return 0;

}