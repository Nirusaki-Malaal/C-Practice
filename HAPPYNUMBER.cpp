#include <iostream>

int main()
{
    int i = 19;
    int temp =i;
    while((i/10 )!=0)
    {
        int sum =0;
        while(i!=0)
        {
            int digit = i % 10;
            i/=10;
            sum+=digit*digit;
        }
        i=sum;
    }
    if (i==1)
    {
        std::cout<< "yes\n";
    }
    else
    {
        std::cout << "no\n";
    }
    return 0;
}
