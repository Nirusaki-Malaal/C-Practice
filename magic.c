#include <stdio.h>

int sum(int n)
{
    int sum = 0;
    while(n!=0)
    {
        sum= sum+ (n%10);
        n/=10;
    }
    return sum;
}

void main()
{
    printf("ENTER A NUMBER\n");
    int num ;
    scanf("%d", &num);
    while ((num/10) != 0)
    {
        num = sum(num);
    }
    if (num == 1)
    {
        printf("IT IS A MAGIC NUMBER");
    }
    else
    {
        printf("NO IT IS NOT A MAGIC NUMBER");
    }
}
