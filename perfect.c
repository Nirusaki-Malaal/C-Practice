#include <stdio.h>

void main()
{
    int compare = 0;
    int num=0;
    printf("Enter A Number\n");
    scanf("%d" , &num);
    for (int i = 1; i<=num/2 ; i++)
    {
        if (num%i==0)
        {
            compare+=i;
        }
    }
    if (compare == num)
    {
        printf("YES it is an perfect number");
    }
    else
    {
        printf("NO it is not an perfect number");
    }
}
