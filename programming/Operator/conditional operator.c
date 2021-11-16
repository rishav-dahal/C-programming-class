#include<stdio.h>

int main()
{
        int numOne=100,numTwo=20,result;
        //result=(numOne>numTwo)? numOne:numTwo;
        //printf("The maximum number is %d",result);
        (numOne>numTwo)? printf("The maximum among %d and %d is %d",numOne,numTwo,numOne):
        printf("The maximum among %d and %d is %d",numOne,numTwo,numTwo);//if this is true print this or that
        
        return 0;
}
