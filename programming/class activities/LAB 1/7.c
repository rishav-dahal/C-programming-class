#include <stdio.h>
#include<math.h>

int main()
{
   double sum,x,two,four,six,eght,ten;
   printf("Enter the value of x:");
   scanf("%lf",&x);
   two=2;
   four=two*3*4;
   six=four*5*6;
   eght=six*7*8;
   ten=eght*9*10;
   sum=1-pow(x,2)/two+pow(x,4)/four+pow(x,6)/six+pow(x,8)/eght-pow(x,100)/ten;
   printf("The result is:%lf",sum);
   return 0;
}
