#include<stdio.h>

int main()
{
    int A=10,B=5,c,d;
    printf("Initial value of A and B was 10 and 5 respectively \nafter A=++A + ++A  B=A-----B the value are ");
    A= ++A + ++A ;
    B= A-- - --B;
    printf("\nA=%d and \nB=%d\n",A,B);

}