#include <stdio.h>
int factorial (int n)
{
    int fact = 1;
    for (int i = 1 ; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int ncr(int n,int r)
{
    int ncr = factorial(n) / (factorial(n-r)*factorial(r));
    return ncr ;
}

void main()
{
    for (int i = 1 ; i<=4 ; i++)
    {
        //spaces
        for(int  j = 1; j<4-i ; j++)
        {
            printf(" ");
        }
        for(int k = 1; k<=i;k++ )
        {
           printf("%d ", ncr(i-1,k-1)); 
        }
        for(int  j = 1; j<4-i ; j++)
        {
            printf(" ");
        }
    printf("\n");
    }
}
