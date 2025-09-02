// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void print(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        cout << n << endl;
        n--;
        print(n);
    }
}


int main()
{
    int b=5000;
    print(b);
    return 0;
}
