#include <stdio.h>
int main()
{
int a[10], i, n, sum = 0, avg;
printf("Enter number of elements: ");
scanf("%d", &n);
for(i=0; i<=n-1; i++)
{
printf("Enter element %d: ",i);
scanf("%d", &a[i]);
sum = sum + a[i];
}
avg = sum/n;
printf("Average = %d", avg);
return 0;
}