#include <stdio.h>

void main()
{
    for (int i = 1 ; i<=4 ; i++)
    {
        //spaces
        for(int  j = 1; j<i ; j++)
        {
            printf(" ");
        }
        for(int k = 4; k>=i;k--)
        {
           printf("* "); 
        }
        for(int  j = 1; j<i ; j++)
        {
            printf(" ");
        }
    printf("\n");
    }
}
