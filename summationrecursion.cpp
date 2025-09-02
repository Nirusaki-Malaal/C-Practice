#include <iostream>
using namespace std;

int summation(int n , int sum)
{
    if (n == 0 )
    {
        return sum;
    }
    else
    {
        sum+=n;
        n--;
        return summation(n,sum);
    }
}

int main()
{
    int p = 10;
    int s = summation(10,0);
    cout << s;
    return 0;
}
