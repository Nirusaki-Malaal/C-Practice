#include <stdio.h>

int factorial(int i, int multiplier)
{
    if (multiplier==0 || i==1)
    {
        return i ;
    }
    else
    {
        i = i * multiplier;
        factorial(i, multiplier-1);
    }
}
 void main()
 {
     printf("ENTER A NUMBER");
     int num;
     scanf("%d", &num);
     int fact = factorial(num, num-1);
     printf("FACTORIAL = %d" , fact);
 } 
