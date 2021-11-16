#include <stdio.h>

int main()
{
    int num, n, reverse = 0, rem,cube=0;
    char option,decision;
    int;
    int i,count=0;
    int fact=1,Onum;
    while(1){
    printf("MENU\na.Palindrome\nb.Armstrong\nc.divisible by 5\nd.Prime number\ne.Factorial of number\n");
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("Choose a task: \n");
    scanf(" %c",&option);
    switch(option)
    {
        case 'a':
            //Palandrome
            n = num;
            do
            {
                rem = n % 10;
                reverse = reverse * 10 + rem;
                n = n/10;
            }
            while (n != 0);
                if (num == reverse)
                printf("\n%d is a palindrome.", num);
                else
                printf("\n%d is not a palindrome.", num);
        break;
        
        case 'b':
        // A program to check whether a number is an Armstrong number or not
        n = num;
        do{
        rem = n % 10;
        cube = rem*rem*rem + cube;
        n = n/10;
        }while (n != 0);

        if (num == cube)
        printf("\n%d is an Armstrong number.", num);
        else
        printf("\n%d is not an Armstrong number.", num);
        break;
        case 'c':
        // A program to check whether a numebr is divisible by 5 or not
        if(num%5==0){
        printf("%d is divisible by 5.",num);
        }
        else{
        printf("%d is not divisible by 5.",num);
        }
        break;
        case 'd':
        // A program to check whether a number is prime or not
        for(i=2;i<num;i++){
        if(num%i==0){
        count++;
        }
        }
        if(count>0 || num==1){
        printf("%d is not a prime number.",num);
        }
        else{
        printf("%d is a prime number.",num);
        }
        break;
        case 'e':
        // A program to find the factorial of a number
        Onum = num;
        while(num!=0){
        fact = fact*num;
        num--;
        }
    printf("%d is the factorial of %d",fact,Onum);
    break;

    }
    printf("\n\nDo you want to continue the program?y for yes and n for no: \n");
    scanf(" %c",&decision);
    if(decision=='n' || decision =='N')
    break;

    }
    return 0;
    }