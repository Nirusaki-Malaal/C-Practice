#include <stdio.h>

int factorial(int num)
{
    int factorial = 1;
    for(int i =1; i<=num; i++)
    {
        factorial = factorial * i ;
    }
    return factorial;
}


void main() 
{
    int digit=0;
    int special=0;
    int num=0;
    printf("Enter A Number");
    scanf("%d",&num);
    int temp = num;
    while (temp!=0)
    {
        digit = temp % 10 ;
        temp = temp / 10;
        special= special + factorial(digit);
    }
    printf("%d", special);
    if (num==special)
    {
        printf("\nYES");
        
    }
    else
    {
        printf("\nNO");
    }
}
