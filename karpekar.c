#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int numofdigits(int num)
{
    int i = 0 ;
    int digits = 0 ;
    int temp = num;
    while(temp!=0)
    {
        temp= temp / 10;
        digits++;
    }
    return digits;
    
}

void main()
{
        int num = 0 ;
        printf("Enter A number\n");
        scanf("%d", &num);
        int square = num*num;
        if (numofdigits(square)%2==0)
        {
            int check_num = square/(int)(pow(10,numofdigits(square)/2)) + square%(int)(pow(10,numofdigits(square)/2));
            //printf("%d", check_num);
            if (check_num == num)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
            
        }
        else
        {
            printf("NO IT IS NOT A KALPEKAR NUMBER");
        }
        
}
