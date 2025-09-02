#include <iostream>
using namespace std;

void print(int prin , int limit)
{
    if (prin > limit)
    {
        return;
    }
    else
    {
        cout << prin << endl;
        prin++;
        print(prin , limit);
    }
}

int main()
{
    int p = 1;
    int limit = 100;
    print(p , limit);
    return 0;
}
